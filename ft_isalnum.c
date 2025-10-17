/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:20:29 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 22:36:48 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isalpha(i) || ft_isdigit(i));
}

// #include <stdio.h>
// #include <ctype.h> 

// int main(void)
// {
//     char c = 'A';

//     printf("ft_isalnum('%c'): %d\n", c, ft_isalnum(c));
//     printf("isalnum('%c'): %d\n", c, isalnum(c));

//     return 0;
// }
