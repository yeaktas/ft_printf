/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:01:38 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/22 18:29:52 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

//string yazdirmak icin.
int	ft_printstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
	return (i);
}

//sayi yazdirmak icin.
int	ft_printnbr(int n)
{
	int		i;
	char	*s;

	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	s = ft_itoa(n);
	i = ft_printstr(s);
	return (i);
}
