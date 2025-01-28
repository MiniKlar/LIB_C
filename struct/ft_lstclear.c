/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:24:46 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:49:04 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void erase(void *content)
// {
// 	free (content);
// }

// int	main(void)
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
// 	ft_lstclear(&node, erase);
// 	if (node == NULL)
//         printf("Liste vide après effacement\n");
// }