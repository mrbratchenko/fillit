/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_place.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 14:13:54 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/09 14:13:56 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_validate_place(char **map, int i, int j, char *matrix)
{
	int x;
	int row_count;
	int j_init;

	x = 0;
	row_count = 0;
	j_init = j;
	while (matrix[x])
	{
		if (ft_isupper(matrix[x]))
		{
			j = (x % 5) + j_init - ft_count_first_dots(matrix);
			if (x > 4)
				row_count = 1;
			if (x > 9)
				row_count = 2;
			if (x > 14)
				row_count = 3;
			if ((i + row_count) >= (int)ft_strlen(map[0])
				|| map[i + row_count][j] != '.')
				return (0);
		}
		x++;
	}
	return (1);
}
