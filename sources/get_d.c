/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:30 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/26 00:53:51 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_d(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = write(1, str, ft_strlen(str));
	return (len);
}
