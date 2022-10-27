/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_usdecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 12:56:39 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_usdecimal(long value)
{
	t_ools	type;

	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.counter = convert_string(type.str);
	free(type.str);
	return (type.counter);
}
