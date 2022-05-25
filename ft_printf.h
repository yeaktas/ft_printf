/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:52:14 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/25 16:53:50 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h> //va_list icin tanimliyoruz.
# include <unistd.h>
# include <stdlib.h> //malloc icin tanimliyoruz.

int		ft_printf(const char *str, ...);
int		ft_formats(va_list ag, const char format);
int		ft_printchar(char c);
int		ft_printstr(char *c);
int		ft_printnbr(int n);
int		ft_printptr(unsigned long long d);
void	ft_dtoh(unsigned long long n);
char	*ft_itoa(int n);
int		ft_lennbr(int n);
int		ft_ulennbr(unsigned int n);
int		ft_print_unsigned_nbr(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_lendtoh(unsigned long long n);
int		ft_print_hex(unsigned int n, const char format);
void	ft_dectohex(unsigned int n, const char format);

#endif