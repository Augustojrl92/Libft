/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:09:23 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 23:29:14 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

//  #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// int main () {
//    char str[50] ="function";
//    int c = 'r';
//    size_t len = 2;

//    ft_memset(str,c,len);
//    printf("ft_memset %s\n", str);

//       memset(str,c,len);
//    printf("memset %s\n", str);
//    return(0);
// }