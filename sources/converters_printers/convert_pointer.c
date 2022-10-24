/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_pointer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2024 00:19:43 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_precedingconvert_string(char *str)
{
	t_ools type;

	type.counter = convert_string(str);
	return (type.counter);
}

int	pointer(long value)
{
	t_ools type;

	type.addr = (unsigned long)value;
	type.counter = print_precedingconvert_string(PRECEDING_STR);
	type.str = ft_itoa_base(type.addr, HEX_BASE);
	type.counter += convert_string(type.str);
	free(type.str);
	return (type.counter);
}
