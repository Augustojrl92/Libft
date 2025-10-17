/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:05:39 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 19:12:52 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (!alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	last = *alst;
	while (last->next)
		last = last->next;
	last->next = new;
}

// #include <stdio.h>

// #include "libft.h"
// #include <stdio.h>

// int main() {
//     t_list *my_list = NULL;
//     t_list *node1 = ft_lstnew("Hola");
//     t_list *node2 = ft_lstnew("pedro");
//     t_list *node3 = ft_lstnew("peres");

//     ft_lstadd_back(&my_list, node1);
//     ft_lstadd_back(&my_list, node2);
//     ft_lstadd_back(&my_list, node3);
//     while (my_list != NULL) {
//         printf("%s ", (char *)my_list->content);
//         my_list = my_list->next;
//     }
//     printf("\n");

//     return 0;
// }
