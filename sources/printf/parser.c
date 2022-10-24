/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:22:07 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:14:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	parser(int c, va_list args)
{
	t_ools	chars;

	if (c == 'c')
		chars.counter = ft_putchar(va_arg(args, int));
	if (c == 's')
		chars.counter = _string(va_arg(args, char *));
	if (c == 'p')
		chars.counter = _pointer(va_arg(args, long));
	if (c == 'i' || c == 'd')
		chars.counter = _decimal(va_arg(args, signed int));
	if (c == 'u')
		chars.counter = _usdecimal(va_arg(args, unsigned int));
	if (c == 'x')
		chars.counter = _hex(va_arg(args, unsigned int), 0);
	if (c == 'X')
		chars.counter = _hex(va_arg(args, unsigned int), 1);
	if (c == '%')
		chars.counter = _percent(c);
	return (chars.counter);
}
