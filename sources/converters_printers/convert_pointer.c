/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/25 11:44:14 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_preceding_string(char *str)
{
	t_ools type;

	type.counter = convert_string(str);
	return (type.counter);
}

int	convert_pointer(long value)
{
	t_ools type;

	type.addr = (unsigned long)value;
	type.counter = print_preceding_string(PRECEDING_STR);
	type.str = ft_itoa_base(type.addr, HEX_BASE);
	type.counter += convert_string(type.str);
	free(type.str);
	return (type.counter);
}
