/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:32:49 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 12:56:28 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	_negative_integer(signed long *value)
{
	t_ools	type;

	type.counter = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		type.counter++;
	}
	return (type.counter);
}

int	convert_decimal(signed long value)
{
	t_ools	type;

	type.counter = _negative_integer(&value);
	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.counter += convert_string(type.str);
	free(type.str);
	return (type.counter);
}
