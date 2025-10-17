/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:43:45 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 00:49:06 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(long n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_str(int l_digit)
{
	char	*src;

	src = malloc((l_digit + 1) * sizeof(char));
	if (!src)
		return (0);
	ft_memset(src, '0', l_digit * sizeof(char) - 1);
	src[l_digit] = '\0';
	return (src);
}

char	*ft_itoa(int n)
{
	int			l_digit;
	char		*src;
	long		num;

	num = n;
	l_digit = ft_countdigit(num);
	src = ft_str(l_digit--);
	if (!src)
		return (0);
	if (num == 0)
	{
		src[0] = '0';
		return (src);
	}
	if (num < 0)
	{
		src[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		*(src + l_digit--) = (num % 10) + '0';
		num /= 10;
	}
	return (src);
}

// #include "libft.h"
// #include <stdio.h> 
// #include <stdlib.h> 

// int main(void)
// {
//     int number = -12345;
//     char *str;
// 	str = ft_itoa(number);
//         printf("itoa es = %s\n", str); 
//     return 0;
// }