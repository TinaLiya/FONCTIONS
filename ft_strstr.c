/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 07:06:47 by jmoreau           #+#    #+#             */
/*   Updated: 2014/12/27 08:25:55 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while ((s1[i + i2]) && (s2[i2]))
	{
		if (s1[i + i2] == s2[i2])
			i2++;
		else
		{
			i2 = 0;
			i++;
		}
	}
	if (!s2[i2])
		return ((char *)s1 + i);
	return (NULL);
}
