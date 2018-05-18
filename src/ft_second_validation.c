/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:37:19 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/10 16:38:12 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_decision(int *i, int *j)
{
	if (*j == 6 || *j == 8)
	{
		*i = 0;
		*j = 0;
		return (1);
	}
	else
		return (0);
}

int				ft_second_validation(char **matrix, int i, int j, int x)
{
	while (matrix[x])
	{
		while (matrix[x][i])
		{
			if (ft_isupper(matrix[x][i]))
			{
				if (ft_isupper(matrix[x][i + 1]))
					j++;
				if (ft_isupper(matrix[x][i - 1]))
					j++;
				if (ft_isupper(matrix[x][i + 5]))
					j++;
				if (ft_isupper(matrix[x][i - 5]))
					j++;
			}
			i++;
		}
		if (!(ft_decision(&i, &j)) || ft_strlen(matrix[x]) != 20)
			return (0);
		else
			x++;
	}
	return (1);
}
