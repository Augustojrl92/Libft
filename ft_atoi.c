/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:11:41 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 23:59:09 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h> 

// int main(int argc, char *argv[])

// //int main(void)
// {
//     const char *str = argv[1];
//     int result_ft_atoi = ft_atoi(str);
//     int result_atoi = atoi(str);

//     printf("Resultado de ft_atoi: %d\n", result_ft_atoi);
//     printf("Resultado de atoi: %d\n", result_atoi);

//     return 0;
// }
