/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:54:08 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/16 14:16:48 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	n;
	char 	j;
	char	*str;

	n = 0;
	j = (char)c;
	i = ft_strlen(s);
	str = (char *)s;
	while (i != 0)
	{
		if (s[i] == j)
		{
			while (s[i] != '\0')
			{
				str[n] = s[i];
				i++;
				n++;
			}
			str[n] = '\0';
			return (str);
		}
		i--;
	}
	return (NULL);
}
