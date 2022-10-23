/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usdecimal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 00:02:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	usdecimal(long value)
{
	int		counter;
	char	*str;

	str = ft_itoa_base(value, DECIMAL_BASE);
	counter = string(str);
	free(str);
	return (counter);
}
