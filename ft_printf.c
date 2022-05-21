/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:47:01 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/21 18:51:43 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_formats(va_list ag, const char format)
{
	if (format == 'c')
		ft_putchar(va_arg(ag, int));
}

int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		i;

	i = 0;
	va_start(ag, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_formats(ag, str[i] + 1);
		else
			i++;
	}
	return (1);
}

int	main(void)
{
	char	a;

	a = 'b';
	ft_printf("%c", a);
	return (0);
}
