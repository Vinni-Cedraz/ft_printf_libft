/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 22:57:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2023 23:25:02 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	t_ools type;

	type.str = ft_strdup(fmt);
	if (!type.str)
		return (0);
	va_start(type.list, fmt);
	type.counter += print_format(type.str, type.list);
	va_end(type.list);
	free((void *)type.str);
	return (type.counter);
}
