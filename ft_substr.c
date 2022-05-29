/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:49:42 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/29 19:01:18 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = malloc(sizeof(*s) * (len + 1));
	if (!s1)
		return (0);
	while (start < len)
	{
		s1[i] = s[start];
		i++;
		start++;;
	}
	s1[i] = '\0';
	return (s1);
}
