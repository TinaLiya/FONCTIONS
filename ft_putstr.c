/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 21:40:27 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/04 19:08:44 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_putstr(char const *s)
{
	while (s)
	{
		ft_putchar(*s);
		s++;
	}
}

void	ft_putstr(char const *s)
{
	while (s)
		ft_putchar(*s++);
}

void	ft_putstr(char const *s)
{
	write(1, &*s++, ft_strlen(s));
}
