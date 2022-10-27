/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:28:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 12:55:27 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_hex(unsigned long long value, int is_upper)
{
	t_ools	type;

	if (is_upper)
	{
		type.str = ft_itoa_base(value, HEX_BASE_UPPER);
		type.counter = convert_string(type.str);
		free(type.str);
		return (type.counter);
	}
	type.str = ft_itoa_base(value, HEX_BASE);
	type.counter = convert_string(type.str);
	free(type.str);
	return (type.counter);
}
