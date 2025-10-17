/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:12:39 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 22:31:19 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = NULL;
	if (s1 && set)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
			end--;
		str = (char *)malloc(sizeof(char) * (end - start + 1));
		if (str)
			ft_strlcpy(str, &s1[start], end - start + 1);
	}
	return (str);
}

//  #include <stdio.h>
//  #include <string.h>

//  int main(void)
//  {
//  	char *s1 = "   Hello World!   ";
//  	char *set = " ";
//  	char *dest = ft_strtrim(s1, set);
//  	printf("ft_strtrim: %s\n", dest);

//  	return (0);
//  }
