/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 23:39:48 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/31 22:59:25 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, size * count);
	return (rtn);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h> 

// int main(void)
// {
//     size_t count = 2147;
//     size_t size = 1;
//     size_t i = 0;

// 	printf("Resultado de ft_calloc:\n");
//     int *arr_ft_calloc = ft_calloc(count, size);
//     while (i < count) {
//         printf("%d ", arr_ft_calloc[i]);
//         i++;
//     }
//     printf("\n");
//     free(arr_ft_calloc);

//     i = 0;

//     printf("Resultado de calloc:\n");
//     int *arr_calloc = calloc(count, size);
//     while (i < count) {
//         printf("%d ", arr_calloc[i]);
//         i++;
//     }
//     printf("\n");
//     free(arr_calloc);

//     return 0;
// }
