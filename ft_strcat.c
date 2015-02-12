/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 05:17:30 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/12 04:39:36 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		r;

	r = 0;
	i = ft_strlen(s1);
	while (s2[r] != '\0')
	{
		s1[i] = s1[i] + s2[r];
		i++;
		r++;
	}
	s1[i] = '\0';
	return (s1);
}
