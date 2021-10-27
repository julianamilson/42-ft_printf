/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:30 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/27 15:48:14 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_d(int nbr)
{
	char	*str;
	int		len;

	if (nbr == 0)
		return (write(1, "0", 1));
	else if (nbr == -2147483648)
		return (write(1, "-2147483648", 11 * sizeof(char)));
	str = ft_itoa(nbr);
	len = write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (len);
}
