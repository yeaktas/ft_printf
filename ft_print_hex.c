/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 00:47:36 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/25 00:47:36 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

//decimal to hexadecimal
void	ft_dectohex(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_dectohex(n / 16, format);
		ft_dectohex(n % 16, format);
	}
	else
	{
		if (n > 9)
		{
			if (format == 'x')
				ft_printchar(n - 10 + 'a');
			if (format == 'X')
				ft_printchar(n - 10 + 'A');
		}
		else
			ft_printchar(n + 48);
	}
}

int	ft_print_hex(unsigned int n, const char format)
{
	if (n == 0)
		return (ft_printchar('0'));
	else
		ft_dectohex(n, format);
	return (ft_len_hex(n));
}
