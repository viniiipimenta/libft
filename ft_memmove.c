/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:07:17 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/20 11:00:04 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	if (dest >= source)
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		ft_memcpy(dest, source, len);
	}	
	return (dst);
}
