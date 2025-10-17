/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:43:06 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 02:05:53 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lenword(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	return (i);
}

static int	ft_countword(const char *s, int c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
		{
			s++;
		}
	}
	return (count);
}

static void	ft_freedom(char **dst)
{
	size_t	n_word;

	n_word = 0;
	while (dst[n_word])
		free(dst[n_word++]);
	free(dst);
}

static char	**ft_split_helper(char **dst, const char *s, char c)
{
	size_t	n_word;
	size_t	l_word;

	n_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			l_word = ft_lenword(s, c);
			dst[n_word++] = ft_substr(s, 0, l_word);
			if (!dst[n_word - 1])
			{
				ft_freedom(dst);
				return (NULL);
			}
			s += l_word;
		}
		else
			s++;
	}
	dst[n_word] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;

	if (!s)
		return (NULL);
	dst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	if (!ft_split_helper(dst, s, c))
		return (NULL);
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     const char *str = "Hello World, This is a Test";
//     char **result = ft_split(str, ' ');

//         while (*result) {
//             printf("%s\n", *result);
//             result++;
//         }

//     return 0;
// }
