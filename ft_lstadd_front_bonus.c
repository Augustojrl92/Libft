/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:15:28 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 19:13:42 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}

// #include <stdio.h>

// int main() {
//     // Crear una lista vacía
//     t_list *my_list = NULL;

//     t_list *my_list = NULL;
//     t_list *node1 = ft_lstnew("Hola");
//     t_list *node2 = ft_lstnew("pedro");
//     t_list *node3 = ft_lstnew("peres");

//     ft_lstadd_front(&my_list, node1);
//     ft_lstadd_front(&my_list, node2);
//     ft_lstadd_front(&my_list, node3);

//     while (my_list != NULL) {
//         printf("%s ", (char *)my_list->content);
//         my_list = my_list->next;
//     }
//     printf("\n");
//     return 0;
// }