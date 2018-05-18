/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:56:21 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 20:56:22 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_place_first(char **map, int *i, int *j, char *matrix)
{
	while (*matrix)
	{
		if (ft_isupper(*matrix))
		{
			map[*i][*j] = *matrix;
			break ;
		}
		matrix++;
	}
}
