/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:33:01 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 01:43:55 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// #include <fcntl.h> 
// #include <unistd.h> 
// int main(void)
// {
//     int fd;
//	   char c;
//     fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	   c = 'A';
//     ft_putchar_fd(c, fd);
//     close(fd);
//     return (0);
// }