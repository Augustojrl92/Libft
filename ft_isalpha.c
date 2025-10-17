/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:42:51 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 22:32:16 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h> 

// int main(void)
// {
//     char c = 'A';

//     printf("ft_isalpha('%c'): %d\n", c, ft_isalpha(c));
//     printf("isalpha('%c'): %d\n", c, isalpha(c));

//     return 0;
// }
