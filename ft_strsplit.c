/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 05:12:14 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/10 03:21:48 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_strdiv(char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		k++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (k);
}

char			**ft_strsplit(char const*s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	tab = (char **)malloc((ft_strdiv(s, c) + 1 ) * sizeof(char *));
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		k = 0;
		while (s[i + k] != c && s[i + k])
			k++;
		tab[j] = ft_strnew(k + 1);
		ft_strncpy(tab[j], &s[i], k);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
