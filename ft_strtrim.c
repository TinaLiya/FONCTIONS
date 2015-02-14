/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 20:32:33 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/14 08:29:15 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
char	*ft_strtrim(char const *s)
{
	char			*str;
	size_t			start;
	size_t			len;

	start = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (s[start] && ft_isspace(s[start]))
		start++;
	if (start >= len)
		return (ft_strdup(""));
	while (ft_isspace(s[len]))
		len--;
	len = len - start;
	str = ft_strsub(s, start, len + 1);
	return (str);
}
