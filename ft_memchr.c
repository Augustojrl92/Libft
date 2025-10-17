/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:42:38 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 01:06:16 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	to_find;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == to_find)
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// int main () {
//    const char str[] = "https://www.ajedrez.com";
//    const char ch = '.';
//    char *ret;
//    char *retft;

//    ret = memchr(str, ch, strlen(str));
//    retft = ft_memchr(str, ch, ft_strlen(str));

//    printf("la cadena despues de  %c es %s\n", ch, ret);
//    printf("la cadena despues de  %c es %s\n", ch, retft);

//    return(0);
// }