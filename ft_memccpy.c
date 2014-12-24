/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/20 22:37:50 by jmoreau           #+#    #+#             */
/*   Updated: 2014/12/20 23:18:02 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
		while (n--)
		{
			if (src[n] == c)
				return (dst);
			((char *)dst)[n] = ((char *)src)[n];
		}
		return (NULL);
}
