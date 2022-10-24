/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _decimal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:32:49 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:16:37 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	_negative_integer(signed long *value)
{
	t_ools type;

	type.counter = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		type.counter++;
	}
	return (type.counter);
}

int	_decimal(signed long value)
{
	t_ools type;

	type.counter = _negative_integer(&value);
	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.counter += _string(type.str);
	free(type.str);
	return (type.counter);
}
