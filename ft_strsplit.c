/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/09 05:12:14 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/09 06:18:08 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int		k;
	char	**tab;

	tab = (char **)malloc((ft_strdiv(s, c) + 1 ) * sizeof(char *));
}
