/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:09:36 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/22 23:51:43 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_flag(const char *format, va_list argument)
{
	int	len;

	len = 0;
	// if (*format == 'c')
	// 	len = get_c(va_arg(argument, int));
	if (*format == 's')
		return (get_s(va_arg(argument, char *)));
	// if (*format == '%')
	// 	len = write(1, format, 1);
	// return (len);
	return(0);
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
