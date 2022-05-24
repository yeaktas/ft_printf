/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:47:01 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/24 15:59:26 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//formatlari uygun fonkisyona gönderiyor.
int	ft_formats(va_list ag, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(ag, int));
	if (format == 's')
		len += ft_printstr(va_arg(ag, char *));
	if (format == 'p')
		len += ft_printptr(va_arg(ag, unsigned long));
	if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(ag, int));
	if (format == '%')
		len += ft_printchar('%');
	return (len);
}

	/* if (format == 'u')
		len += ft_print_unsigned(va_arg(ag, unsigned int));
	if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(ag, unsigned int)); */
//va_list ag; variadic arguman(degisken arguman)
//va_start(ag, str); strden sonra gelen tüm parametreleri ag nin icine at.
int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(ag, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(ag, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(ag);
	return (len);
}

int	main(void)
{
	char	a;
	char	*str;
	int		len;
	char	*p;
	int		i;

	i = 4;
	p = str;
	str = "65";
	a = 'b';
	len = 5;
	i += write(1, "yazdir\n", 7);
	printf("len pointer adresi:%p\n", str);
	ft_printf("len pointer adresi:%p\n", str);
	ft_printf("ptr uzunlugu:%d\n", ft_printptr);
	ft_printf("dtoh uzunlugu:%d\n", ft_dtoh);
	return (0);
}
