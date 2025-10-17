/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:56:04 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 01:34:43 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	if (s2 < s1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
			i++;
		}
	}
	return (s1);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstringo";

//    printf("antes memmove dest = %s, src = %s\n", dest, src);
//    memmove(dest, src, 5);
//    printf("despues memmove dest = %s, src = %s\n", dest, src);

//    printf("FT antes memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 5);
//    printf("FT despues memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }
