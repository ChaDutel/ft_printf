/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:58:19 by cdutel-l          #+#    #+#             */
/*   Updated: 2021/12/15 13:09:49 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_printf(const char *fmt, ...);
int		ft_putstr_mod(char *c);
int		ft_putstr_mod2(char *c);
int		ft_ifft(const char *fmt, int n, va_list args);
int		ft_nbh(unsigned int n);
int		ft_nbhmaj(unsigned int n);
int		ft_pvoidh(unsigned long long n);
int		ft_string(char *s);
void	ft_unsignedputnbr(unsigned int n, int *i);
void	ft_putnbr(int n, int *i);
#endif