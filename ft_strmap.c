/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 22:02:09 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/06 00:39:13 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int	i;
	char *str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	while (s[i])
		str[i] = f(s[i++]);
	return (str);
}
