/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:55:21 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/28 23:28:13 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// #include "libft.h"

// int main() {
//     // Crear una lista vacía
//     t_list *my_list = NULL;

//     // Crear algunos nodos para agregar a la lista
//     t_list *node1 = ft_lstnew("Hola");
//     t_list *node2 = ft_lstnew("Mundo");
//     t_list *node3 = ft_lstnew("!");

//     // Agregar los nodos a la lista
//     ft_lstadd_back(&my_list, node1);
//     ft_lstadd_back(&my_list, node2);
//     ft_lstadd_back(&my_list, node3);

//     // Encontrar el último nodo de la lista
//     t_list *last_node = ft_lstlast(my_list);

//     return 0;
// }
