/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:58:21 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/25 00:41:39 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulennbr(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

//unsignet int to ascii
char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_ulennbr(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (n != 0)
	{
		str[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

//unsigned sayi yazmak icin.
int	ft_print_unsigned_nbr(unsigned int n)
{
	int		i;
	char	*s;

	i = 0;
	if (n == 0)
		return (ft_printchar('0'));
	s = ft_uitoa(n);
	i = ft_printstr(s);
	free(s);
	return (i);
}
