/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_decimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:32:49 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/28 13:18:17 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_decimal(signed long value)
{
	t_ools	type;
	type.counter = 0;
	if (value < 0)
	{
		ft_putchar('-');
		value *= -1;
		type.counter++;
	}
	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.counter += put_string(type.str);
	return (free(type.str), type.counter);
}
