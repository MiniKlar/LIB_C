/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:37:04 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:21:24 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		tmp = ft_lstnew(NULL);
		if (!tmp)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		ft_lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	return (new_lst);
}

// void erase(void *content)
// {
// 	free (content);
// }
// void *ft_add30(void *c)	
// {	
// 		int *ptr;

// 		ptr = (int *)c;
// 		*ptr = *ptr + 30;
// 		return (ptr);
// }

// int main(void)
// {
// 	t_list *node = NULL;
//     t_list *new_node;
// 	int a;
// 	int i;

//     i = 0;
// 	while (i < 3)
// 	{
// 		a = 60 + i;
//         int *ptr = (int *)malloc(sizeof(int));
//         if (!ptr)
//             return 1;
//         *ptr = a;

//         new_node = ft_lstnew(ptr);
//         ft_lstadd_front(&node, new_node);
//         i++;
// 	}
// 	t_list *current = node;
// 	while (current != NULL)
// 	{
// 		printf("%d\n", *(int *)current->content);
// 		current = current->next;
// 	}
// 	current = ft_lstmap(node, ft_add30, erase);
// 	while (current != NULL)
// 	{
// 		printf("%d\n", *(int *)current->content);
// 		current = current->next;
// 	}
// }