/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:57:36 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/05 17:30:42 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"

/*
** free le bigbuffer, met a null le pointeur,
** reset bigbuff_size et current_char.
*/

static void	clear_gnl(char **bigbuff,
		size_t *bigbuff_size,
		size_t *current_char)
{
	free(*bigbuff);
	*bigbuff = NULL;
	*bigbuff_size = 0;
	*current_char = 0;
}

/*
** Comme strdup mais ne s'arrete pas aux \0.
** ET ajoute un \0 à la fin de la partie copiee.
** Sert a copier la ligne a renvoyer depuis le buffer.
*/

static char	*my_memdup(char *s, size_t n)
{
	char	*ret;
	size_t	i;

	if (!(ret = malloc(n + 1)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		ret[i] = s[i];
		++i;
	}
	ret[n] = '\0';
	return (ret);
}

/*
** Lit tout le fd et enregistre son contenu dans la variable
** buffer statique bigbuff. Met a jour bigbuff_size.
*/

static int	read_fd(int fd, char **bigbuff, size_t *bigbuff_size)
{
	ssize_t	char_read;
	char	buff[BUFF_SIZE];
	char	*tmp;

	while ((char_read = read(fd, &buff, BUFF_SIZE)))
	{
		if (char_read < 0
				|| !(tmp = malloc(*bigbuff_size + char_read)))
			return (-1);
		ft_memcpy(tmp, *bigbuff, *bigbuff_size);
		ft_memcpy(tmp + *bigbuff_size, buff, char_read);
		*bigbuff_size += char_read;
		free(*bigbuff);
		*bigbuff = tmp;
	}
	return (0);
}

/*
** Parcours bigbuff en cherchant et renvoyant la prochaine ligne.
*/

static char	*search_next(char *bigbuff,
		size_t bigbuff_size,
		size_t *current_char)
{
	char		*ret;
	size_t		i;
	
	printf("bigbuff_size : %zu\n", bigbuff_size);
	//printf("1) c_c %zu\n", *current_char);
	i = *current_char;
	while (i < bigbuff_size && bigbuff[i] != '\n')
		++i;
	printf("2) i %zu, c_c %zu\n", i, *current_char);
	if (*current_char >= bigbuff_size || *current_char > i)
	{
		printf("ret = null\n");
		ret = NULL;
	}
	else
	{
		printf("i - current_char = %zu\n", i - *current_char);
		ret = my_memdup(bigbuff + *current_char, i - *current_char);
	}
	*current_char = i + 1;
	//printf("3) i %zu, c_c %zu\n", i, *current_char);
	printf("ret : %p\n", ret);
	return (ret);
}

int			get_next_line(const int fd, char **line)
{
	static t_data	data = {-1, 0, NULL, 0};

	if (fd < 0 || data.current_fd != fd)
	{
		data.current_fd = fd;
		clear_gnl(&data.bigbuff, &data.bigbuff_size, &data.current_char);
		if (fd < 0)
			return (-1);
		if (read_fd(fd, &data.bigbuff, &data.bigbuff_size) == -1)
		{
			clear_gnl(&data.bigbuff, &data.bigbuff_size, &data.current_char);
			return (-1);
		}
	}
	if (!(*line = search_next(data.bigbuff, data.bigbuff_size, &data.current_char)))
	{
		printf("may you stop ?\n");
		clear_gnl(&data.bigbuff, &data.bigbuff_size, &data.current_char);
		printf("lol ?\n");
		return (0);
	}
	return (1);
}
