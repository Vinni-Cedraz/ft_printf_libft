/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/22 23:36:14 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static int	print_preceding_string(char *str)
{
	int	counter;

	counter = string(str);
	return (counter);
}

int	handle_pointer(void *ptr_addr)
{
	int				counter;
	char			*str;
	unsigned long	addr;

	addr = (unsigned long)ptr_addr;
	counter = print_preceding_string(PRECEDING_STR);
	str = ft_itoa_base(addr, HEX_BASE);
	counter += string(str);
	free(str);
	return (counter);
}
