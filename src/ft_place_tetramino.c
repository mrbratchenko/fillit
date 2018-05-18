/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_tetramino.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 21:15:51 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 21:15:53 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_place_tetrimino(char **map, int i, int j, char *matrix)
{
	int x;
	int row_count;

	x = 0;
	row_count = 0;
	ft_push_to_upperleft(matrix, ft_count_first_dots(matrix));
	if (!(ft_validate_place(map, i, j, matrix)))
		return (0);
	ft_place_first(map, &i, &j, matrix);
	while (matrix[x])
	{
		if (ft_isupper(matrix[x]))
		{
			if (x > 4)
				row_count = 1;
			if (x > 9)
				row_count = 2;
			if (x > 14)
				row_count = 3;
			map[i + row_count][(x % 5) + j - ft_count_first_dots(matrix)] =
			matrix[x];
		}
		x++;
	}
	return (1);
}
