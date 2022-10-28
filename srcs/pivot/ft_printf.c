/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 22:57:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 22:34:18 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	t_ools	type;

	if (!fmt)
		return (0);
	type.counter = 0;
	va_start(type.list, fmt);
	type.counter += print_until(fmt, type.list);
	return (va_end(type.list), type.counter);
}
