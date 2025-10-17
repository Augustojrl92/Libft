/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:11:22 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 18:04:44 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i--;
	}
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

//    ret = strrchr(str, ch);
//    retft = ft_strrchr(str, ch);

//    printf("String after %c is  %s\n", ch, ret);
//    printf("String after %c is  %s\n", ch, retft);
//    return(0);
// }
