/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:32:49 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 23:13:03 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	handle_negative_integer(signed long *value)
{
	t_ools prntd;

	prntd.count = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		prntd.count++;
	}
	return (prntd.count);
}

int	decimal(signed long value)
{
	t_ools prntd;

	prntd.count = handle_negative_integer(&value);
	prntd.str = ft_itoa_base(value, DECIMAL_BASE);
	prntd.count += string(prntd.str);
	free(prntd.str);
	return (prntd.count);
}
