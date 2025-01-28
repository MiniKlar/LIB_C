/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:56:16 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 01:19:23 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((const unsigned char)c == (*(const unsigned char *)s))
			return ((void *)s);
		else
		{
			i++;
			s++;
		}
	}
	return (NULL);
}
/*int main(void)
{
	printf("%p\n", ft_memchr("Salut", 'a', 2));
}*/