/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:57:44 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/05 16:13:07 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __GET_NEXT_LINE_H
# define __GET_NEXT_LINE_H

# define BUFF_SIZE 42

typedef struct	s_data
{
	int		current_fd;
	size_t	current_char;
	char	*bigbuff;
	size_t	bigbuff_size;
}				t_data;

int	get_next_line(const int fd, char **line);

#endif
