/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 08:21:15 by mpimenta          #+#    #+#             */
/*   Updated: 2022/05/16 10:29:36 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	test[100] =  "funciona pelo amor de deus";
	char	test2[100] = "teste";
	char	test3[100] = "funciona pelo amor de deus";
	
	printf("is alpha: %d\n", ft_isalpha('1'));
	printf("is digit: %d\n", ft_isdigit('9'));
	printf("is alnum: %d\n", ft_isalnum('a'));
	printf("is ascII: %d\n", ft_isascii('h'));
	printf("is print: %d\n", ft_isprint('A'));
	printf("strlen: %zu\n", ft_strlen("testando"));
	printf("memset: %s\n", ft_memset(test, 'b', 3));
	ft_bzero(test, 0);
	printf("bzero: %s\n", test);
	printf("memcpy: %s\n", ft_memcpy(test, test2, 5));
	printf("memmove: %s\n", ft_memmove(test2, test, 5));
	printf("strlcpy: %zu\n", ft_strlcpy(test, test2, 5));
	printf("strlcat %zu\n", strlcat(test, test2, 50));
	printf("to upper: %c\n", ft_toupper('a'));
	printf("to lower: %c\n", ft_tolower('A'));
	printf("strchr: %s\n", ft_strchr(test3, 'a'));
	printf("strrchr: %s\n", ft_strrchr(test3, 'a'));
	return (0);
}
