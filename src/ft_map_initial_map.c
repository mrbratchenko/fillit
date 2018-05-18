/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_initial_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:53:20 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 20:53:22 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_map_initial_map(char *str)
{
	int		size;
	int		i;
	int		j;
	char	*map1;
	char	**map2;

	size = (ft_strlen(str) + 1) / 21 * 4;
	while (!(ft_sqrt(size)))
		size++;
	i = ft_sqrt(size);
	size = size + i;
	map1 = (char*)malloc(sizeof(char) * (size));
	ft_memset(map1, '.', size);
	j = i;
	while (i < size)
	{
		map1[i] = '*';
		i = j + i + 1;
	}
	map1[size] = '\0';
	map2 = ft_strsplit(map1, '*');
	free(map1);
	return (map2);
}
