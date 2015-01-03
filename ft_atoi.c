/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 19:25:25 by jmoreau           #+#    #+#             */
/*   Updated: 2015/01/03 20:53:24 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			s = s * 10 + (str[i] - 48);
		i++;
	}
	return (s);
}

int		main(void)
{
	char *str;
	
	str = "0ia788009842";
	printf("%d", ft_atoi(str));
	printf("\n%d", atoi(str));
	return (0);
}
