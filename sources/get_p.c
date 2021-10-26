/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:43 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/24 00:35:15 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*translate(unsigned long ptr, char *rmdr_str, size_t rmdr_len)
{
	char	*base;

	base = ft_strdup("0123456789abcdef");
	while (ptr)
	{
		rmdr_str[--rmdr_len] = base[ptr % 16];
		ptr = ptr / 16;
	}
	return (rmdr_str);
}

int	get_p(unsigned long ptr)
{
	unsigned long	aux;
	size_t			rmdr_len;
	char			*rmdr_str;
	int				printed_len;

	aux = ptr;
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
	rmdr_str = translate(ptr, rmdr_str, rmdr_len);
	printed_len = write(1, "0x", 2);
	printed_len += write(1, rmdr_str, ft_strlen(rmdr_str) * sizeof(char));
	return (printed_len);
}
