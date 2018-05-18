/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_some_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:41:59 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 20:42:01 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_free_some_space(char **map, int *letter_nr, int *i_rem, int *j_rem)
{
	int i;
	int j;
	int size;

	size = ft_strlen(map[0]);
	j = size - 1;
	i = size - 1;
	while (i >= 0)
	{
		if (map[i][j] == 'A' + (*letter_nr - 1))
		{
			map[i][j] = '.';
			*i_rem = i;
			*j_rem = j;
		}
		j--;
		if (j < 0)
		{
			j = size - 1;
			i--;
		}
	}
	*letter_nr = *letter_nr - 1;
	return (map);
}
