/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:37 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/23 19:19:58 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_i(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = write(1, str, ft_strlen(str));
	return (len);
}
