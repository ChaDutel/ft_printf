/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:27:20 by cdutel-l          #+#    #+#             */
/*   Updated: 2021/12/13 14:19:43 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *i)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*i) += 11;
	}
	else
	{
		if (n < 0)
		{
			(*i)++;
			ft_putchar('-');
			n *= (-1);
		}
		(*i)++;
		if (n > 9)
			ft_putnbr(n / 10, i);
		ft_putchar(n % 10 + '0');
	}
}
