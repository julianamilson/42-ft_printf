/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:31:11 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/19 20:50:09 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFTPRINTF_H
#define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>

/**
 * @return Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).
*/
int	ft_printf(char *format, ...);

#endif
