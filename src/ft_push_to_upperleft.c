/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_upperleft.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 19:34:10 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/11 19:34:12 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*ft_push_to_upperleft(char *s, int dots)
{
	int		i;
	int		first;

	i = 0;
	first = 0;
	while (!(ft_isupper(s[first])))
		first++;
	if (first == 0 || (first - dots) == 0)
		return (s);
	while (s[i])
	{
		if (ft_isupper(s[i]))
		{
			s[i - first + dots] = s[i];
			s[i] = '.';
		}
		i++;
	}
	return (s);
}
