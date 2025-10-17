/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:29:40 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 20:08:00 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
	lst = NULL;
}

// #include "libft.h"
// #include <stdio.h>

// void delete_content(void *content) {
//     printf("Eliminando: %s\n", (char *)content);
// }

// int main() {
//     t_list *node1 = ft_lstnew("Hola");
//     t_list *node2 = ft_lstnew("Mundo");

//     printf("Contenido del nodo1  %s\n", (char *)node1->content);
//     printf("Contenido del nodo2  %s\n", (char *)node2->content);

//     ft_lstdelone(node1, delete_content);
//     node1 = NULL;

//     ft_lstdelone(node2, delete_content);
//     node2 = NULL;

//     return 0;
// }
