/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:05:12 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/27 14:08:04 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_s(char *s)
{
	int	len;

	if (!s)
	{
		len = write (1, "(null)", (6 * sizeof(char)));
		return (len);
	}
	len = write (1, s, ft_strlen(s));
	return (len);
}
