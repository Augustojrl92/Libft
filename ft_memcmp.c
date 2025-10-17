/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:52:13 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 19:27:17 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	unsigned const char		*str1;
	unsigned const char		*str2;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
		{
			return ((int)(*str1 - *str2));
		}
		str1++;
		str2++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// int main()
// {
//     char str1[] = "hola caacola";
//     char str2[] = "hola caracola ";

//     int result_ft_memcmp = ft_memcmp(str1, str2, 10);
//     int result_memcmp = memcmp(str1, str2, 10);

//     printf("El resultado de ft_memcmp es: %d\n", result_ft_memcmp);
//     printf("El resultado de memcmp es: %d\n", result_memcmp);
// }