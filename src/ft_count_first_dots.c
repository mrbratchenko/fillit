/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_first_dots.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 20:30:16 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/08 20:30:26 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_count_first_dots(char *str)
{
	int first;
	int dots;

	first = 0;
	dots = 0;
	while (!(ft_isupper(str[first])))
		first++;
	if ((ft_isupper(str[first + 4])) || (ft_isupper(str[first + 5])
		&& ft_isupper(str[first + 9]) && ft_isupper(str[first + 10])))
		dots = 1;
	if (ft_isupper(str[first + 3]) && (!(ft_isupper(str[first + 1]))))
		dots = 2;
	return (dots);
}
