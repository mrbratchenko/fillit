/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 13:58:50 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/09 13:58:51 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_read_buffer(int fd)
{
	int		ret;
	int		size;
	char	*buf;
	char	**map;
	char	**matrix;

	size = 0;
	buf = (char *)malloc(sizeof(char) * (547));
	ret = read(fd, buf, 547);
	buf[ret] = '\0';
	if (ft_first_validation(buf))
	{
		map = ft_map_initial_map(buf);
		matrix = ft_create_matrix(buf);
		while (matrix[size])
			size++;
		if (!(ft_second_validation(matrix, 0, 0, 0)))
			ft_putstr("error\n");
		else
			ft_solve_map(map, matrix, size, ft_strlen(map[0]));
	}
	else
		ft_putstr("error\n");
	free(buf);
}
