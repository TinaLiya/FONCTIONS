/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 19:22:14 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/06 00:41:14 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;
	size_t	i;

	i = 0;
	if ((str = (char *)malloc(size * sizeof(char))))
		while (i != size)
			str[i++] = '\0';
	return (str);
}
