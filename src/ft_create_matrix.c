/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:31:11 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 20:31:16 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_create_matrix(char *str)
{
	int		i;
	int		j;
	char	**matrix;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			str[i] = 'A' + j;
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
		{
			str[i + 1] = '*';
			j++;
		}
		i++;
	}
	str[i] = '\0';
	matrix = ft_strsplit(str, '*');
	return (matrix);
}
