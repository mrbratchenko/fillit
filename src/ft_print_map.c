/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 19:26:41 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/11 19:26:45 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_print_map(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		ft_putstr(map[i]);
		ft_putstr("\n");
		i++;
	}
}