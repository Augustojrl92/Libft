/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:57:32 by aurodrig          #+#    #+#             */
/*   Updated: 2024/03/29 21:13:50 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*begin;

	if (!lst)
		return (0);
	tmp = lst;
	begin = ft_lstnew(tmp->content);
	if (!begin)
		return (0);
	begin->content = f(begin->content);
	tmp = tmp -> next;
	while (tmp)
	{
		new = ft_lstnew(tmp->content);
		if (!new)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		new->content = f(new->content);
		ft_lstadd_back(&begin, new);
		tmp = tmp->next;
	}
	return (begin);
}

// #include "libft.h"
// #include <stdio.h>
// void *topper(void *content)
// {
//     char *str = (char *)content;
//     char *result = ft_strdup(str);
//     int i = 0;
//     while (result[i] != '\0')
//     {
//         if (result[i] >= 'a' && result[i] <= 'z')
//             result[i] = result[i] - 32; 
//         i++;
//     }
//     return result;
// }

// void delete_content(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *my_list = NULL;
//     t_list *node1 = ft_lstnew("hola");
//     t_list *node2 = ft_lstnew("pedro ");
//     t_list *node3 = ft_lstnew("peres");

//     ft_lstadd_back(&my_list, node1);
//     ft_lstadd_back(&my_list, node2);
//     ft_lstadd_back(&my_list, node3);

// 	printf("Contenido de la lista original:\n");
//     t_list *temp_original = my_list;
//     while (temp_original != NULL)
//     {
// 		char *str_original = (char *)temp_original->content;
//         printf("%s ", str_original);
//         temp_original = temp_original->next;
//     }
//     printf("\n");

//     t_list *modified_list = ft_lstmap(my_list, topper, delete_content);

//     printf("Contenido de la lista en mayúsculas:\n");
//     t_list *temp = modified_list;
//     while (temp != NULL)
//     {
// 		char *str = (char *)temp->content;
//         printf("%s ", str);
//         temp = temp->next;
//     }
//     printf("\n");

//     ft_lstclear(&modified_list, delete_content);

//     return 0;
// }
