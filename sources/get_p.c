/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:43 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/27 14:03:19 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*converter(unsigned long nbr, char *rmdr_str, size_t rmdr_len)
{
	char	*base;

	base = ft_strdup("0123456789abcdef");
	while (nbr)
	{
		rmdr_str[--rmdr_len] = base[nbr % 16];
		nbr = nbr / 16;
	}
	free(base);
	return (rmdr_str);
}

int	get_p(unsigned long nbr)
{
	unsigned long	aux;
	size_t			rmdr_len;
	char			*rmdr_str;
	int				printed_len;

	aux = nbr;
	if (aux == 0)
		return (write(1, "(nil)", sizeof(char) * 5));
	rmdr_len = 0;
	while (aux)
	{
		aux = aux / 16;
		rmdr_len++;
	}
	rmdr_str = malloc((rmdr_len + 1) * sizeof(char));
	if (!rmdr_str)
		return (0);
	rmdr_str[rmdr_len] = '\0';
	rmdr_str = converter(nbr, rmdr_str, rmdr_len);
	printed_len = write(1, "0x", 2);
	printed_len += write(1, rmdr_str, ft_strlen(rmdr_str) * sizeof(char));
	free(rmdr_str);
	return (printed_len);
}
