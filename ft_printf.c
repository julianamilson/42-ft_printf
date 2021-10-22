/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:09:36 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/22 18:20:47 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_flag(char *format, va_list ap)
{
	if (*format == 'c')
		get_c();
	if (*format == 's')
		get_s();
	if (*format == 'p')
		get_p();
	if (*format == 'd')
		get_d();
	if (*format == 'i')
		get_i();
	if (*format == 'u')
		get_u();
	if (*format == 'x')
		get_low_x();
	if (*format == 'X')
		get_upper_x();
	if (*format == '%')
		write(1, '%', 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		len;

	va_start(arguments, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			get_flag(format++, arguments);
			*format++;
		}
		*format++;
		len++;
	}
	va_end(arguments);
	return (len);
}
