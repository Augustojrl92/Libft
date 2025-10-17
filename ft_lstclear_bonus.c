/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:45:40 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 19:15:36 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			ft_lstdelone(current, (del));
			current = next;
		}
		*lst = NULL;
	}
}

// #include "libft.h"
// #include <stdio.h>

// void delete_content(void *content) {
//     printf("Eliminando: %s\n", (char *)content);
// }

// int main() {
//     t_list *my_list = NULL;
//     t_list *node1 = ft_lstnew("Hola");
//     t_list *node2 = ft_lstnew("pedro");
//     t_list *node3 = ft_lstnew("peres");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     printf("Contenido de la lista antes de borrarla:\n");
//     printf("%s\n", (char *)node1->content);
//     printf("%s\n", (char *)node2->content);
//     printf("%s\n", (char *)node3->content);

//     printf("\nBorrando la lista:\n");
//     ft_lstclear(&node1, delete_content);

//     return 0;
// }
