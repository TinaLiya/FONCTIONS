/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 20:12:35 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/14 08:08:27 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strnew(len + 1);
	if (!s || len > ft_strlen(s))
		return (NULL);
	while (i != len)
	{
		str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
