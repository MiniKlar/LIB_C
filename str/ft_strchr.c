/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:31:30 by miniklar          #+#    #+#             */
/*   Updated: 2025/01/28 01:20:04 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (const char)c)
		return ((char *)s);
	else
		return (NULL);
}

/*int main(void)
{
	printf("%s\n", ft_strchr("sclut", 'c'));
}*/