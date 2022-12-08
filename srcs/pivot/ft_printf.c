/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 22:57:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/28 13:53:31 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft_includes.h"

int	ft_printf(const char *fmt, ...)
{
	t_ools	type;

	if (!fmt)
		return (-1);
	type.counter = 0;
	va_start(type.list, fmt);
	type.counter += print_until(fmt, type.list);
	return (va_end(type.list), type.counter);
}
