/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenkhat <mbenkhat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:16:32 by mbenkhat          #+#    #+#             */
/*   Updated: 2021/12/01 12:21:59 by mbenkhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *x);
void	ft_putstr(char *str, int *x);
void	ft_putnbr(long int n, int *x);
void	ft_putnbr_unsigned(unsigned int n, int *x);
int		ft_strlen(const char *str);
void	ft_puthexa(unsigned long hex, char c, int *x);
void	ft_puthexa_ptr(void *ptr, int *x);
#endif