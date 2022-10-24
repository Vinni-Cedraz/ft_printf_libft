/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usdecimal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 23:19:12 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	usdecimal(long value)
{
	t_ools type;

	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.count = string(type.str);
	free(type.str);
	return (type.count);
}
