/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 22:38:25 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 02:35:19 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char dest[20] = "pedro";
// 	char src[] = " picapiedra!";
// 	size_t size = 20;

// 	printf("ft_strlcpy: %lu\n", ft_strlcpy(dest, src, size));
// 	printf("dest: %s\n", dest);

// 	char dest2[20] = "pedro";
// 	char src2[] = " picapiedra";
// 	size_t size2 = 20;

// 	printf("strlcpy: %lu\n", strlcpy(dest2, src2, size2));
// 	printf("dest: %s\n", dest2);

// 	return (0);
// }
