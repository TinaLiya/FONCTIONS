/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/03 19:25:25 by jmoreau           #+#    #+#             */
/*   Updated: 2015/01/12 23:41:10 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		s;
	int		plus;

	i = 0;
	s = 0;
	plus = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+' && plus == 0)
			plus++;
		else if (str[i] == '-' && plus == 0)
			plus--;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + (str[i] - 48);
		i++;
	}
	if (plus < 0)
		return (s * -1);
	return (s);
}
