/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 19:45:44 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/11 19:46:27 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strtrim(char *s)
{
	int		i;
	int		j;
	char	*fresh;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (!(ft_isupper(s[i])))
		i++;
	j = ft_strlen(s) - 1;
	while (!(ft_isupper(s[j])))
		j--;
	if (j <= 0)
	{
		j = 1;
		i = 2;
	}
	fresh = (char*)malloc(sizeof(char) * (j - i + 2));
	if (fresh == NULL)
		return (NULL);
	j = j - i + 1;
	fresh = ft_strncpy(fresh, &s[i], j);
	fresh[j] = '\0';
	return (fresh);
}
