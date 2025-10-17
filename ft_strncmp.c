/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 03:38:16 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 23:31:24 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	while ((*s1 != '\0' && *s1 == *s2) && 0 < n)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// int main() {
//     const char *s1 = "holA";
//     const char *s2 = "hola";
//     size_t n = 4;
//     int copia = ft_strncmp(s1, s2, n);
// 	int original = strncmp(s1, s2, n);

//     printf("ft_strncmp %d\n", copia);
// 	printf("strncmp %d\n", original);
//     return 0;
// }