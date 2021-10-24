/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilson- <jmilson-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:27:43 by jmilson-          #+#    #+#             */
/*   Updated: 2021/10/24 00:14:40 by jmilson-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_p(unsigned long ptr)
{
	char			*base;
	unsigned long	aux;
	size_t			remainder_len;
	char			*remainder_str;
	char			*hex_str;
	int				printed_len;

	base = ft_strdup("0123456789abcdef");
	aux = ptr;
	remainder_len = 0;
    while (aux)
    {
        aux = aux / 16;
        remainder_len++;
    }
    remainder_str = malloc((remainder_len + 1) * sizeof(char));
    if (!remainder_str)
        return (0);
    remainder_str[remainder_len] = '\0';
    while (ptr)
    {
        remainder_str[--remainder_len] = base[ptr % 16];
        ptr = ptr / 16;
    }
    printed_len = 0;
    printed_len += write(1, "0x", 2);
	printed_len += write(1, remainder_str, ft_strlen(remainder_str) * sizeof(char));
    return (printed_len);
}
