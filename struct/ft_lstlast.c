/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:23:37 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:21:20 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (lst);
	while (lst != NULL)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}

// int	main(void)
// {
// 	t_list *node = NULL;
// 	t_list *new_node;
// 	t_list *last_node;
// 	int a;
// 	int *ptr;
// 	int i;

// 	a = 60;
// 	i = 0;
// 	while (i < 3)
// 	{
// 		a = a + 1;
// 		ptr = malloc(sizeof(int));
// 		*ptr = a;
// 		new_node = ft_lstnew(ptr);
// 		ft_lstadd_back(&node, new_node);
// 		i++;
// 	}
// 	printf("%d\n", *(int *)(node->content));
// 	last_node = ft_lstlast(node);
// 	printf("%d\n", *(int *)(last_node->content));
// }
