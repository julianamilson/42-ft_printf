/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:31:11 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/22 23:21:04 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

/**
 * @return return the number of characters printed (excluding the null byte).
*/
int	ft_printf(const char *format, ...);
int	get_c(int c);
int	get_s(char *s);
size_t ft_strlen(const char *str);

#endif
