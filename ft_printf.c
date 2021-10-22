/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:09:36 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/22 19:32:25 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_flag(const char *format, va_list argument)
{
	int	len;

	len = 0;
	// if (*format == 'c')
	// 	len = get_c();
	// if (*format == 's')
	// 	len = get_s();
	// if (*format == 'p')
	// 	len = get_p();
	// if (*format == 'd')
	// 	len = get_d();
	// if (*format == 'i')
	// 	len = get_i();
	// if (*format == 'u')
	// 	len = get_u();
	// if (*format == 'x')
	// 	len = get_low_x();
	// if (*format == 'X')
	// 	len = get_upper_x();
	// if (*format == '%')
	// 	len = write(1, '%', 1);
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
			len += get_flag(format++, arguments);
			*format++;
		}
		*format++;
		len += write (1, format, 1);
	}
	va_end(arguments);
	return (len);
}
