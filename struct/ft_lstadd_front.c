/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:25:22 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:21:33 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
// 	t_list *node = NULL;
// 	t_list *new_node;
// 	int a;
// 	int *ptr;
// 	int i ;

// 	a = 60;
// 	i = 0;
// 	while (i < 3)
// 	{
// 		a = a + 1;
// 		ptr = malloc(sizeof(int));
// 		*ptr = a;
// 		new_node = ft_lstnew(ptr);
// 		ft_lstadd_front(&node, new_node);
// 		i++;
// 	}
// 	t_list *current = node;
// 	while (current != NULL)
// 	{
// 		printf("%d\n", *(int *)current->content);
// 		current = current->next;
// 	}
// }
