/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:28:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 00:01:54 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	hex(unsigned long long value, int is_upper)
{
	int		counter;
	char	*str;

	if (is_upper)
	{
		str = ft_itoa_base(value, HEX_BASE_UPPER);
		counter = string(str);
		free(str);
		return (counter);
	}
	str = ft_itoa_base(value, HEX_BASE);
	counter = string(str);
	free(str);
	return (counter);
}
