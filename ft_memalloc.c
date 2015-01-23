/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 20:03:08 by jmoreau           #+#    #+#             */
/*   Updated: 2015/01/23 02:31:07 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*p;
	int		i;

	i = 0;
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	while (size)
	{
		size--;
		((unsigned char *)p)[size] = 0;
	}
}
