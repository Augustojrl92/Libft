/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:25:11 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 02:06:29 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == (char)c)
			return ((char *)(s - 1));
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// int main () 
// {
//    const char str[] = "https://www.ajedrez.com";
//    const char ch = '.';
//    char *ret;
//    char *retft;

//    ret = strchr(str, ch);
//    retft = ft_strchr(str, ch);

//    printf("String after %c is  %s\n", ch, ret);
//    printf("String after %c is %s\n", ch, retft);
//    return(0);
// }