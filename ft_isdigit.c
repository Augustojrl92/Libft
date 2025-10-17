/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:42:51 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 22:37:11 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	{
		if (i >= 48 && i <= 57)
			return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h> 

// int main(void)
// {
//     char c = 'A';
//     printf("ft_isdigit('%c'): %d\n", c, ft_isdigit(c));
//     printf("isdigit('%c'): %d\n", c, isdigit(c));

//     return 0;
// }