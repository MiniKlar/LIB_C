/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:29:03 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:21:22 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
// void ft_add30(void *c)
// 	{	
// 		int *ptr;

// 		ptr = (int *)c;
// 		*ptr = *ptr + 30;
// 	}
// int	main(void)
// {
// 	t_list *node;
// 	int a;
// 	void *ptr;
// 	a = 60;
// 	ptr = &a;
// 	node = ft_lstnew(ptr);
// 	printf("%d\n", *(int *)node->content);
// 	ft_lstiter(node, ft_add30);
// 	printf("%d\n", *(int *)node->content);
// }
