/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:19:30 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:19:18 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*int main(void)
{
	char    buffer[100] = "Salut";
	char    buffer1[100] = "Salut";
	char    buffer2[100] = "Salut";

	ft_bzero(buffer, 5);
	ft_bzero(buffer1, 3);
	ft_bzero(buffer2, 10);
	printf("%s\n%s\n%s\n", buffer, buffer1, buffer2);
}*/