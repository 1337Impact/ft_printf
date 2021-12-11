/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:46:24 by mbenkhat          #+#    #+#             */
/*   Updated: 2021/12/01 12:18:17 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *x)
{
	write(1, &c, 1);
	(*x)++;
}

void	ft_putstr(char *str, int *x)
{
	if (!str)
	{
		ft_putstr("(null)", x);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, x);
		str++;
	}
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(long int n, int *x)
{
	long int	ln;

	ln = n;
	if (ln == 0)
		ft_putchar(ln + '0', x);
	if (ln < 0)
	{
		ft_putchar('-', x);
		ln = -ln;
	}
	if (ln <= 9 && ln)
	{
		ft_putchar(ln + '0', x);
	}
	if (ln > 9)
	{
		ft_putnbr(ln / 10, x);
		ln = ln % 10;
		ft_putchar(ln + '0', x);
	}
}

void	ft_putnbr_unsigned(unsigned int n, int *x)
{
	if (n == 0)
		ft_putchar(n + '0', x);
	if (n <= 9 && n)
	{
		ft_putchar(n + '0', x);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, x);
		n = n % 10;
		ft_putchar(n + '0', x);
	}
}
