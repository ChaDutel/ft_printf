/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedputnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:28:29 by cdutel-l          #+#    #+#             */
/*   Updated: 2021/12/13 14:20:03 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsignedputnbr(unsigned int n, int *i)
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
