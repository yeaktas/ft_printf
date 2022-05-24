/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:52:14 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/24 20:21:51 by yaktas           ###   ########.fr       */
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

#endif