/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_low_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:40 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/28 15:29:58 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(unsigned int nbr, char *base, int rmdr_len)
{
	char	*str;
	int		printed_len;

	str = ft_calloc((rmdr_len + 1), sizeof(char));
	if (!str)
		return (0);
	while (nbr)
	{
		str[--rmdr_len] = base[nbr % 16];
		nbr = nbr / 16;
	}
	printed_len = write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (printed_len);
}

int	get_x(unsigned int nbr)
{
	unsigned int	aux;
	int				rmdr_len;

	aux = nbr;
	if (aux == 0)
		return (write(1, "0", sizeof(char)));
	rmdr_len = 0;
	while (aux)
	{
		aux = aux / 16;
		rmdr_len++;
	}
	return (converter(nbr, "0123456789abcdef", rmdr_len));
}
