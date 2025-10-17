/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:23:40 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 21:20:32 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include "libft.h"
// #include <stdio.h>
// void	ft_tolower_str(unsigned int index, char *c)
// {
// 	*c = ft_tolower(*c);
// }
// int main(void)
// {
// 	char str[] = "HOLO CARACOLA";
// 	char*result;
// 	printf("Original string: %s\n", str);
// 	result = ft_strmapi(str, ft_tolower_str);
// 	printf("String after ft_strmapi: %s\n", result);
// 	return (0);
// }
