/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:31:11 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/28 22:06:43 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

/**
 * @return return the number of characters printed (excluding the null byte).
*/
int		ft_printf(const char *format, ...);
int		get_c(int c);
int		get_s(char *s);
int		get_p(unsigned long nbr);
int		get_d(int nbr);
int		get_u(unsigned int nbr);
int		get_x(unsigned int nbr);
int		get_upper_x(unsigned int nbr);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t number, size_t size);
char	*ft_itoa(int n);

#endif
