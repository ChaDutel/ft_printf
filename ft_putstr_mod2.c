/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_mod2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:37:14 by cdutel-l          #+#    #+#             */
/*   Updated: 2021/12/15 13:10:51 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_mod2(char *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (c[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		i -= ft_putchar(c[i]);
		j++;
	}
	j += 2;
	return (j);
}
