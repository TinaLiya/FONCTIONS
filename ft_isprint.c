/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 00:45:47 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/06 00:20:06 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isprint(int c)
{
	char	a;
	char	b;

	a = 32;
	b = 126;
	if ((c >= a) && (c <= b))
		return (1);
	return (0);
}
