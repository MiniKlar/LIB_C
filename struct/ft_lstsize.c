/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:21:36 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:21:29 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int	main(void)
// {
// 	t_list *node;
// 	int a;
// 	int *ptr;

// 	a = 60;
// 	ptr = &a;
// 	node = ft_lstnew(ptr);
// 	ft_lstadd_back(&node, ft_lstnew(ptr));
// 	ft_lstadd_back(&node, ft_lstnew(ptr));
// 	ft_lstadd_back(&node, ft_lstnew(ptr));
// 	printf("%d\n", ft_lstsize(node));
// }
