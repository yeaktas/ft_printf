/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:47:01 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/22 00:39:17 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list ag, const char format)
{
	int i;
	i = 0;
	if (format == 'c')
		i += ft_putchar(va_arg(ag, int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list ag; //variadic arguman(degisken arguman)
	int i;

	i = 0;
	va_start(ag, str); //strden sonra gelen tüm parametreleri ag nin icine at.
	while (str[i])
	{
		if (str[i] == '%')
			ft_formats(ag, str[i++]);
		else
			i++;
	}
	va_end(ag);
	return (1);
}

int	main(void)
{
	char	a;

	a = 'b';
	ft_printf("%c", a);
	return (0);
}
