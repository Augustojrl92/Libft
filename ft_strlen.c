/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 01:47:46 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/31 23:24:49 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen( const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *str = "hola caracola";
// 	printf("ft_strlen: %d\n", ft_strlen(str));
// 	printf("strlen: %lu\n", strlen(str));
// 	return (0);
// }
