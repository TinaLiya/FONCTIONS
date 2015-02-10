/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoreau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 20:32:33 by jmoreau           #+#    #+#             */
/*   Updated: 2015/02/10 03:26:45 by jmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s)
{
	char			*str;
	int				i;
	unsigned int	start;
	size_t			len;

	start = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[start] && ft_isspace(s[start]))
		start++;
	if (start == len)
		return (NULL);
	while (ft_isspace(s[len]))
		len--;
	len = len - start;
	str = ft_strsub(s, start, len);
	return (str);
}
