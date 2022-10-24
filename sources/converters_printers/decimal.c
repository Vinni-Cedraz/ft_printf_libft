/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decimal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:32:49 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/22 23:34:28 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	handle_negative_integer(signed long *value)
{
	int	counter;

	counter = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		counter++;
	}
	return (counter);
}

int	decimal(signed long value)
{
	int		counter;
	char	*str;

	counter = handle_negative_integer(&value);
	str = ft_itoa_base(value, DECIMAL_BASE);
	counter += string(str);
	free(str);
	return (counter);
}
