/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:36:29 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/10 16:36:35 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_print_and_free(char **matrix, char **map)
{
	ft_print_map(map);
	ft_multiple_free(matrix);
	ft_multiple_free(map);
}

static void		ft_plus_one_tetrimino(int *i, int *j, int *x)
{
	*i = 0;
	*j = -1;
	*x = *x + 1;
}

static void		ft_minus_one_tetrimino(int *i, int *j)
{
	*i = *i + 1;
	*j = 0;
}

void			ft_solve_map(char **map, char **matrix, int number, int size)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (x < number)
	{
		if (i < size && j < size && map[i][j] == '.')
			if (ft_place_tetrimino(map, i, j, matrix[x]))
				ft_plus_one_tetrimino(&i, &j, &x);
		if (i == (size - 1) && j == (size - 1) && x < number)
			map = ft_free_some_space(map, &x, &i, &j);
		j++;
		if (j >= size)
			ft_minus_one_tetrimino(&i, &j);
		if (x < 0)
		{
			map = ft_increase_map(map, &size, &i, &j);
			x = 0;
		}
	}
	ft_print_and_free(matrix, map);
}
