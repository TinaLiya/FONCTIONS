/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 05:45:34 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/14 01:54:51 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (!s2)
		return ((char *)s1);
	while ((s1[i]) && (i < n))
	{
		while (s1[i + s] == s2[s] && i + s < n && s1[i + s] && s2[s])
			s++;
		if (s == ft_strlen(s2))
			return ((char *)&s1[i]);
		else
			s = 0;
		i++;
	}
	return (NULL);
}
