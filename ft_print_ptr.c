/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:50:09 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/24 15:59:28 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//decimal to hexadecimal
int	ft_dtoh(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		ft_dtoh(n / 16);
		ft_dtoh(n % 16);
	}
	else
	{
		if (n > 9)
			i += ft_printchar(n - 10 + 'a');
		else
			i += ft_printchar(n + 48);
	}
	return (i);
}

//pointer yazdirmak icin
int	ft_printptr(unsigned long d)
{
	int	i;

	i = write(1, "0x", 2);
	if (d == 0)
		return (i += write(1, "0", 1));
	else
		i += ft_dtoh(d);
	return (i);
}
