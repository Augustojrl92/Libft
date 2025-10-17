/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:44:53 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 19:32:30 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (n--)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>
// int main ()
// {
//     char src[] = "aaaa";
//     char dest[] = "bmbnm";

//     printf("\n%s", ft_memcpy(dest, src, 4));
// 	printf("\n%s", memcpy(dest, src, 4));
// }