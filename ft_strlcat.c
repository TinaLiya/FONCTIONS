/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 21:17:59 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/13 08:09:59 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dst);
	if (!src)
		return (len);
	if (len >= size || !dst)
		return (size + ft_strlen(src));
	while (src[i] && len + i < size - 1)
	{
		dst[len + i] = src[i];
		++i;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
