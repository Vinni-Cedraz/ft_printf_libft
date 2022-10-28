/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 20:21:48 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_preceding_string(char *str)
{
	t_ools	type;

	type.counter = put_string(str);
	return (type.counter);
}

int	put_pointer(unsigned long long value)
{
	t_ools	type;

	if (value == 0)
		return (print_preceding_string(ZERO_EXCEPTION_STR));
	type.str = ft_itoa_base(value, HEX_BASE);
	type.counter = put_string(PRECEDING_STR);
	type.counter += put_string(type.str);
	return (free(type.str), type.counter);
}
