/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:32:02 by acauchy           #+#    #+#             */
/*   Updated: 2017/11/28 13:17:35 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*line;
	int		gnl_ret;
	int		fd;
	int		count;

	if (argc != 2)
	{
		ft_putstr("usage : ./test_gnl <filename>");
		return (0);
	}
	gnl_ret = 1;
	fd = open(argv[1], O_RDONLY);
	count = 0;
	while (gnl_ret == 1)
	{
		//printf("call %d\n", count);
		gnl_ret = get_next_line(fd, &line);
		printf("return : %d\n", gnl_ret);
		if (gnl_ret == 0)
			ft_putstr("\nEOF");
		else if (gnl_ret == -1)
			ft_putstr("\nFAILURE");
		else
			ft_putstr(line);
			ft_putchar('\n');
		++count;
	}
	return (0);
}
