/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:50:16 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 20:09:09 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// #include "libft.h"

// void print_content(void *content) {
//     printf("%s ", (char *)content);
// }

// int main() {
//     t_list *my_list = NULL;

//     t_list *node1 = ft_lstnew("Hola");
//     t_list *node2 = ft_lstnew("Mundo");
//     t_list *node3 = ft_lstnew("!");

//     ft_lstadd_back(&my_list, node1);
//     ft_lstadd_back(&my_list, node2);
//     ft_lstadd_back(&my_list, node3);

//     ft_lstiter(my_list, print_content);
//     printf("\n");

//     return 0;
// }
