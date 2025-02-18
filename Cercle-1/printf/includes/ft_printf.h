/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascordil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:01:33 by ascordil          #+#    #+#             */
/*   Updated: 2024/11/21 14:10:51 by ascordil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include "ft_printf.h"
# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# define _BHMIN_  "0123456789abcdef"
# define _BHMAJ_  "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	format_parser(char letter, va_list *li);
int	handle_ptr(va_list *li);
int	ft_putstr(char *str);
int	ft_putchar(char letter);
int	ft_putnbr(int nb);
int	ft_putnbrhex(unsigned int nb, char *base);
int	ft_putnbr_ptr_hex(unsigned long nb, char *base);
int	ft_putnbr_unsigned(unsigned int nb);
#endif
