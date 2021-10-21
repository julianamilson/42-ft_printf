/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:09:36 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/21 00:32:26 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	get_flag(char *format)
{
	if (*format == 'c')
		get_char();
	if (*format == 's')
		get_string();
	if (*format == 'p')
		get_ptr_hex();
	if (*format == 'd')
		get_dec();
	if (*format == 'i')
		get_int();
	if (*format == 'u')
		get_u_dec();
	if (*format == 'x')
		get_low_hex();
	if (*format == 'X')
		get_up_hex();
	if (*format == '%')
		write(1, '%', 1);
}

int	ft_printf(const char *format, ...)
{
	va_list arguments;
	int	len;

	va_start(arguments, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			get_flag(format++);
			*format++;
		}
		*format++;
		len++;
	}
	return (len);
}
