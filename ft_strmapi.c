/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 22:19:17 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/04 22:34:51 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	i = 0;
	str = ft_strnew(ft_strlen(s));
	while (*s)
		str[i] = f(i++, s++);
	return (str);
}
