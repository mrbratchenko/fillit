/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_increase_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:48:42 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 20:48:44 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_increase_map(char **map, int *size, int *i_init, int *j_init)
{
	int		i;
	int		size_init;
	char	*map1;
	char	**map2;

	*i_init = 0;
	*j_init = 0;
	ft_multiple_free(map);
	*size = *size + 1;
	size_init = *size;
	*size = *size * *size + *size;
	map1 = (char*)malloc(sizeof(char) * (*size));
	ft_memset(map1, '.', *size);
	i = size_init;
	while (size_init < *size)
	{
		map1[size_init] = '*';
		size_init = size_init + i + 1;
	}
	map1[*size] = '\0';
	*size = i;
	map2 = ft_strsplit(map1, '*');
	free(map1);
	return (map2);
}
