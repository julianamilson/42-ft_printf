/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:09:36 by jmilson-          #+#    #+#             */
/*   Updated: 2021/11/17 21:02:26 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_flag(const char *format, va_list argument)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len = get_c(va_arg(argument, int));
	else if (*format == 's')
		len = get_s(va_arg(argument, char *));
	else if (*format == 'p')
		len = get_p(va_arg(argument, unsigned long));
	else if (*format == 'd' || *format == 'i')
		len = get_d(va_arg(argument, int));
	else if (*format == 'u')
		len = get_u(va_arg(argument, unsigned int));
	else if (*format == 'x')
		len = get_x(va_arg(argument, unsigned int));
	else if (*format == 'X')
		len = get_upper_x(va_arg(argument, unsigned int));
	else if (*format == '%')
		len = write(1, format, 1);
	return (len);
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
			format++;
			len += get_flag(format++, arguments);
		}
		else
		{
			len += write (1, format, 1);
			format++;
		}
	}
	va_end(arguments);
	return (len);
}
