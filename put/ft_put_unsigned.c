/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 00:59:07 by lomont            #+#    #+#             */
/*   Updated: 2025/01/28 02:09:16 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../LIB_C.h"

int	ft_put_unsigned(unsigned int n)
{
	static int	counter;

	counter = 0;
	if (n >= 10)
		ft_put_unsigned(n / 10);
	counter += ft_print_char((n % 10) + '0');
	return (counter);
}
