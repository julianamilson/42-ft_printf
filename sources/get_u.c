/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_u.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:30 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/27 17:56:15 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(unsigned int nbr, int str_len)
{
	char	*str;
	int		len;

	str = ft_calloc((str_len + 1), sizeof(char));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		str[--str_len] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	len = write(1, str, ft_strlen(str) * sizeof(char));
	free (str);
	return (len);
}

int	get_u(unsigned int nbr)
{
	unsigned int	aux;
	int				str_len;

	if (nbr == 0)
		return (write(1, "0", 1));
	else
	{
		aux = nbr;
		str_len = 0;
		if (nbr < 0)
			str_len++;
		while (aux)
		{
			aux = aux / 10;
			str_len++;
		}
	}
	return (converter(nbr, str_len));
}
