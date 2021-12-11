/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:03:15 by mbenkhat          #+#    #+#             */
/*   Updated: 2021/12/01 14:40:12 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_hexa(unsigned long nbr)
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

char	*to_hexa_low(unsigned long nbr)
{
	char	*hex;
	char	*str;
	int		i;

	hex = "0123456789abcdef";
	str = malloc(len_hexa(nbr) + 1);
	str[len_hexa(nbr)] = 0;
	i = len_hexa(nbr) - 1;
	while (nbr >= 16)
	{
		str[i] = hex[(nbr % 16)];
		nbr = nbr / 16;
		i--;
	}
	str[i] = hex[nbr];
	return (str);
}

char	*to_hexa_up(unsigned long nbr)
{
	char	*hex;
	char	*str;
	int		i;

	hex = "0123456789ABCDEF";
	str = malloc(len_hexa(nbr) + 1);
	str[len_hexa(nbr)] = 0;
	i = len_hexa(nbr) - 1;
	while (nbr >= 16)
	{
		str[i] = hex[(nbr % 16)];
		nbr = nbr / 16;
		i--;
	}
	str[i] = hex[nbr];
	return (str);
}

void	ft_puthexa(unsigned long hex, char c, int *x)
{
	char	*str;

	if (hex == 0)
		ft_putchar('0', x);
	if (c == 'x')
	{
		str = to_hexa_low(hex);
		ft_putstr(str, x);
		free(str);
	}
	if (c == 'X')
	{
		str = to_hexa_up(hex);
		ft_putstr(str, x);
		free(str);
	}
}
