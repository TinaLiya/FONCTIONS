/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 03:06:50 by jmoreau           #+#    #+#             */
/*   Updated: 2014/12/24 03:30:53 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		s;

	i = 0;
	s = ft_strlen(s1);
	while (i < n)
	{
		s1[s+i] = s2[i];
		i++;
	}
	s1[s+i] = '\0';
	return (s1);
}
