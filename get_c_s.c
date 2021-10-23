/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_c_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:20:07 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/22 22:34:31 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_c(int c)
{
	int	len;

	len = write (1, &c, 1);
	return (len);
}

// int	get_s(char *s)
// {
// 	int	len;

// 	len = write (1, s, ft_strlen(s));
// 	return (len);
// }
