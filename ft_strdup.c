/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:05:59 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 02:17:09 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*src;
	size_t	i;

	i = 0;
	src = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!src)
		return (0);
	src = ft_memcpy(src, s1, ft_strlen(s1) + 1);
	return (src);
}

// #include <stdio.h>	
// #include <string.h>

// int main(void)
// {
// 	char *src = "hola pedro pers picapiedra";
// 	char *dest = ft_strdup(src);
// 	printf("ft_strdup: %s\n", dest);

// 	dest = strdup(src);
// 	printf("strdup: %s\n", dest);

// 	return (0);
// }
