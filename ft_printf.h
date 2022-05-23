/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:46:42 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/23 19:58:43 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h> //va_list icin tanimliyoruz.
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_formats(va_list ag, const char format);
int	ft_printchar(char c);
int	ft_printstr(char *c);
int	ft_printnbr(int n);
int ft_printptr(unsigned long long d);

#endif
