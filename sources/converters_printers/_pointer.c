/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _pointer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:19:43 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	print_preceding_string(char *str)
{
	t_ools type;

	type.counter = _string(str);
	return (type.counter);
}

int	pointer(long value)
{
	t_ools type;

	type.addr = (unsigned long)value;
	type.counter = print_preceding_string(PRECEDING_STR);
	type.str = ft_itoa_base(type.addr, HEX_BASE);
	type.counter += _string(type.str);
	free(type.str);
	return (type.counter);
}
