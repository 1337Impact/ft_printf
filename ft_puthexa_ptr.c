/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:01:09 by mbenkhat          #+#    #+#             */
/*   Updated: 2021/12/01 14:41:53 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_hexa_long(unsigned long nbr)
{
	int	x;

	x = 0;
	while (nbr > 0)
	{
		nbr /= 16;
		x++;
	}
	return (x);
}

char	*to_hexa_ptr(unsigned long nbr)
{
	char	*hex;
	char	*str;
	int		i;

	hex = "0123456789abcdef";
	str = malloc(len_hexa_long(nbr) + 1);
	str[len_hexa_long(nbr)] = 0;
	i = len_hexa_long(nbr) - 1;
	while (nbr >= 16)
	{
		str[i] = hex[(nbr % 16)];
		nbr = nbr / 16;
		i--;
	}
	str[i] = hex[nbr];
	return (str);
}

void	ft_puthexa_ptr(void *ptr, int *x)
{
	char	*str;

	ft_putstr("0x", x);
	if (!ptr)
		ft_putchar('0', x);
	str = to_hexa_ptr((unsigned long)ptr);
	ft_putstr(str, x);
	free(str);
}
