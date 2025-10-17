/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:47:46 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/31 23:06:20 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[h] == '\0')
		return ((char *)haystack);
	while (haystack[h])
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)haystack + h);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *haystack = "hola y adios pedro peres";
// 	char *needle = "adios";
// 	size_t len = 6;
// 	printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, len));
// 	printf("strnstr: %s\n", strnstr(haystack, needle, len));
// 	return (0);
// }