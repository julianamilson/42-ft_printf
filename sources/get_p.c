/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:43 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/27 18:01:42 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(unsigned long nbr, char *base, size_t rmdr_len)
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
	printed_len = write(1, "0x", 2);
	printed_len += write(1, str, ft_strlen(str) * sizeof(char));
	free(str);
	return (printed_len);
}

int	get_p(unsigned long nbr)
{
	unsigned long	aux;
	int				rmdr_len;

	aux = nbr;
	if (aux == 0)
		return (write(1, "0x0", sizeof(char) * 3));
	rmdr_len = 0;
	while (aux)
	{
		aux = aux / 16;
		rmdr_len++;
	}
	return (converter(nbr, "0123456789abcdef", rmdr_len));
}
