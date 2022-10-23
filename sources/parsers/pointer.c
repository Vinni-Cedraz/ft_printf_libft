/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 00:50:17 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	print_preceding_string(char *str)
{
	int	counter;

	counter = string(str);
	return (counter);
}

int	pointer(long value)
{
	int				counter;
	char			*str;
	unsigned long	addr;

	addr = (unsigned long)value;
	counter = print_preceding_string(PRECEDING_STR);
	str = ft_itoa_base(addr, HEX_BASE);
	counter += string(str);
	free(str);
	return (counter);
}
