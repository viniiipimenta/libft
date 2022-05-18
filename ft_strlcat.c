/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:05:47 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/18 09:47:47 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src) - 1;
	j = 0;
	while (dstsize--)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (ft_strlen(dst));
}
