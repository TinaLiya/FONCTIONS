/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 22:36:43 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/05 23:33:54 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size);
void	ft_putstr(char const *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		r;

	i = 0;
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i])
		str[i] = s1[i++];
	r = i;
	i = 0;
	while (s2[i])
		str[++r] = s2[i++];
	str[++r] = '\0';
	return (str);
}
