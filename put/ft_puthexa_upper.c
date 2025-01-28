/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 00:53:17 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 02:09:36 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

int	ft_puthexa_upper(unsigned int n)
{
	char	*base16;
	int		counter;

	counter = 0;
	base16 = "0123456789ABCDEF";
	if (n >= 16)
		counter += ft_puthexa_upper(n / 16);
	counter += ft_print_char(base16[n % 16]);
	return (counter);
}
