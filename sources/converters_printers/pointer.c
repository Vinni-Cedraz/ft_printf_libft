/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 23:16:49 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	print_preceding_string(char *str)
{
	t_ools prntd;

	prntd.count = string(str);
	return (prntd.count);
}

int	pointer(long value)
{
	t_ools type;

	type.addr = (unsigned long)value;
	type.count = print_preceding_string(PRECEDING_STR);
	type.str = ft_itoa_base(type.addr, HEX_BASE);
	type.count += string(type.str);
	free(type.str);
	return (type.count);
}
