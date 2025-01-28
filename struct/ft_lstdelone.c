/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:24:16 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:21:18 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void erase(void *content)
// {
// 	free (content);
// }

// int	main(void)
// {
// 	t_list *feur = NULL;
// 	int a;
// 	int	*ptr;

// 	a = 42;
// 	ptr = malloc(sizeof(int));
//     if (!ptr)
//         return 1;
//     *ptr = a; 
// 	feur = ft_lstnew(ptr);
// 	printf("%d\n", *(int *)feur->content);
// 	ft_lstdelone(feur, erase);
// 	//feur = NULL;
// 	if (feur == NULL)
//         printf("Liste vide après effacement\n");
// }
