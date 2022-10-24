/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:28:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 23:10:25 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	hex(unsigned long long value, int is_upper)
{
	t_ools prntd;

	if (is_upper)
	{
		prntd.str = ft_itoa_base(value, HEX_BASE_UPPER);
		prntd.count = string(prntd.str);
		free(prntd.str);
		return (prntd.count);
	}
	prntd.str = ft_itoa_base(value, HEX_BASE);
	prntd.count = string(prntd.str);
	free(prntd.str);
	return (prntd.count);
}
