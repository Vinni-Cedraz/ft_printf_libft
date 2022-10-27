/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:22:07 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 13:00:51 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parser(int c, va_list args)
{
	t_ools	chars;

	chars.counter = 0;
	if (c == 'c')
		chars.counter = ft_putchar(va_arg(args, int));
	if (c == 's')
		chars.counter = convert_string(va_arg(args, char *));
	if (c == 'p')
		chars.counter = convert_pointer(va_arg(args, long));
	if (c == 'i' || c == 'd')
		chars.counter = convert_decimal(va_arg(args, signed int));
	if (c == 'u')
		chars.counter = convert_usdecimal(va_arg(args, unsigned int));
	if (c == 'x')
		chars.counter = convert_hex(va_arg(args, unsigned int), 0);
	if (c == 'X')
		chars.counter = convert_hex(va_arg(args, unsigned int), 1);
	if (c == '%')
		chars.counter = convert_percent(c);
	return (chars.counter);
}
