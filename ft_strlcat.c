/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 22:05:43 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 02:25:42 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char dst[20] = "pepito";
// 	char src[] = " grillo";
// 	size_t size = 20;

// 	printf("ft_strlcat: %lu\n", ft_strlcat(dst, src, size));
// 	printf("dst: %s\n", dst);

// 	char dst2[20] = "pepito";
// 	char src2[] = " grillo";
// 	size_t size2 = 20;

// 	printf("strlcat: %lu\n", strlcat(dst2, src2, size2));
// 	printf("dst: %s\n", dst2);

// 	return (0);
// }