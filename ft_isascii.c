/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:22:12 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 22:37:04 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	{
		if (i >= 0 && i <= 127)
			return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h> 

// int main(void)
// {
//     char c = 'A';

//     printf("ft_isascii('%c'): %d\n", c, ft_isascii(c));
//     printf("isascii('%c'): %d\n", c, isascii(c));

//     return 0;
// }