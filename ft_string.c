/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel-l <cdutel-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:34:14 by cdutel-l          #+#    #+#             */
/*   Updated: 2021/12/15 13:10:59 by cdutel-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *s)
{
	int	i;

	if (!s)
		return (ft_string("(null)"));
	i = 0;
	while (s[i])
		i += ft_putchar(s[i]);
	return (i);
}
