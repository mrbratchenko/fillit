/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 22:07:31 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/09 22:07:32 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_first_validation(char *str)
{
	int len;
	int hashes;

	len = ft_strlen(str) + 1;
	hashes = 0;
	if (len > 547)
		return (0);
	if (len % 21 != 0)
		return (0);
	while (*str)
	{
		if (*str == '#')
			hashes++;
		if (*str == '#' && *(str + 1) != '#' && *(str - 1) != '#'
			&& *(str + 5) != '#' && *(str - 5) != '#')
			return (0);
		if (*str != '#' && *str != '.' && *str != '\n')
			return (0);
		str++;
	}
	if (((float)len / 21) != ((float)hashes / 4))
		return (0);
	return (1);
}
