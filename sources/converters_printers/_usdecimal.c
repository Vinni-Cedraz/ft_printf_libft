/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _usdecimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:16:05 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	usdecimal(long value)
{
	t_ools type;

	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.counter = _string(type.str);
	free(type.str);
	return (type.counter);
}
