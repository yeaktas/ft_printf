/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:01:38 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/24 20:55:13 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//char yazdirmak icin.
int	ft_printchar(char c)
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
		ft_printchar(c[i]);
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
		return (ft_printchar('0'));
	s = ft_itoa(n);
	i = ft_printstr(s);
	free(s);
	return (i);
}

//sayinin uzunlugunu hesaplama.
int	ft_lennbr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

//int to ascii
//int min degeri maks degere cevrilemedigi icin sayiyi x(long)e atadik.
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	x;

	x = n;
	len = ft_lennbr(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (x < 0)
	{
		str[0] = '-';
		x = -x;
	}
	while (x != 0)
	{
		str[--len] = x % 10 + 48;
		x = x / 10;
	}
	return (str);
}
