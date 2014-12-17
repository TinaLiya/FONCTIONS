/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 10:53:57 by jmoreau           #+#    #+#             */
/*   Updated: 2014/11/18 12:24:36 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char*)s;
	while (tmp && *tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return (NULL)
=======
char	*ft_strchr(const char *s, int c)
{

>>>>>>> 7d48ebf81100ce3e5c09dded6b7027e9511b2fc3
}
