/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:53:51 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 22:37:32 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	{
		if (i >= 32 && i <= 126)
		{
			return (1);
		}
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h> 
// int main(void)
// {
//     char c = 'A';
//     printf("ft_isprint('%c'): %d\n", c, ft_isprint(c));
//     printf("isprint('%c'): %d\n", c, isprint(c));
//     return 0;
// }