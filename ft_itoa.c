/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 03:27:37 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/12 04:18:32 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	int		k;
	char	*str;

	i = 0;
	k = n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (k)
	{
		k = k / 10;
		i++;
	}
	if (n < 0)
		i++;
	str = ft_strnew(i + 1);
	i--;
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (str);
}