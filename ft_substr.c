/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:02:08 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 18:09:40 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (0);
	if ((size_t)ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(len + 1);
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// #include <stdio.h> 
// #include <stdlib.h> 

// int main(void)
// {
//     char *s = "Hola racacola!";
//     unsigned int start = 6;
//     size_t len = 5;

//     char *result = ft_substr(s, start, len);
//         printf("ft_substr: %s\n", result);
//     return 0;
// }
