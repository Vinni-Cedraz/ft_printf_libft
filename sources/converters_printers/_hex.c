/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _hex.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:28:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2024 00:16:48 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	_hex(unsigned long long value, int is_upper)
{
	t_ools type;

	if (is_upper)
	{
		type.str = ft_itoa_base(value, HEX_BASE_UPPER);
		type.counter = _string(type.str);
		free(type.str);
		return (type.counter);
	}
	type.str = ft_itoa_base(value, HEX_BASE);
	type.counter = _string(type.str);
	free(type.str);
	return (type.counter);
}
