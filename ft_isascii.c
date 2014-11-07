/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 06:23:04 by jmoreau           #+#    #+#             */
/*   Updated: 2014/11/07 06:34:43 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	char	a;
	char	b;

	a = 0;
	b = 127;
	if ((c >= a) && (c <= b))
		return (1);
	return (0);
}
