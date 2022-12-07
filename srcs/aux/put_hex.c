/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:28:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/07 12:19:49 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hex(unsigned long long value, int is_upper)
{
	t_ools	type;

	if (is_upper)
	{
		type.str = ft_itoa_base(value, HEX_BASE_UPPER);
		type.counter = put_string(type.str);
		return (free(type.str), type.counter);
	}
	type.str = ft_itoa_base(value, HEX_BASE);
	type.counter = put_string(type.str);
	return (free(type.str), type.counter);
}
