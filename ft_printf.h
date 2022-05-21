/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:46:42 by yaktas            #+#    #+#             */
/*   Updated: 2022/05/21 18:46:44 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdio.h>
# include <stdarg.h> //va_list icin tanimliyoruz.
# include <unistd.h>

int ft_printf(const char *, ...);
void ft_formats(va_list ag, const char format);
int ft_putchar(char c);
#endif
