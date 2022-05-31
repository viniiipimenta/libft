/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:32:28 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/31 12:53:25 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		set2;

	set2 = (int) set;
	if (!s1)
		return (0);
	s2 = malloc(sizeof(char) * ft_strlen(s1));
	if (!s2)
		return (0);
	if (s1[0] == *set && s1[ft_strlen(s1)] == *set)
	{
		s2 = ft_strchr(s1, set2);
		s2[ft_strlen(s2) + 1] = '\0';
	}
	return (s2);
}
