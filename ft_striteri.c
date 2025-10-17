/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:28:56 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 18:30:22 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_tolower_str(unsigned int index, char *c)
// {
// 	*c = ft_tolower(*c);
// }
// #include "libft.h"
// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "HOLO CARACOLA";
// 	printf("Original string: %s\n", str);
// 	ft_striteri(str, ft_tolower_str);
// 	printf("String after ft_striteri: %s\n", str);
// 	return (0);
// }
