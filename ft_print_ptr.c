/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:50:09 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/25 00:53:03 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lendtoh(unsigned long long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

//decimal to hexadecimal
void	ft_dtoh(unsigned long long n)
{
	if (n >= 16)
	{
		ft_dtoh(n / 16);
		ft_dtoh(n % 16);
	}
	else
	{
		if (n > 9)
			ft_printchar(n - 10 + 'a');
		else
			ft_printchar(n + 48);
	}
}

//pointer yazdirmak icin
int	ft_printptr(unsigned long long d)
{
	int	i;

	i = 0;
	i += write(1, "0x", 2);
	if (d == 0)
		(i += write(1, "0", 1));
	else
		ft_dtoh(d);
	return (ft_lendtoh(d) + i);
}
