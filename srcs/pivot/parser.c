/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:22:07 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 22:18:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft_includes.h"

int	parser(int c, va_list args)
{
	t_ools	chars;

	chars.counter = 0;
	if (c == 'c')
		chars.counter = ft_putchar(va_arg(args, int));
	else if (c == 's')
		chars.counter = put_string(va_arg(args, char *));
	else if (c == 'p')
		chars.counter = put_pointer(va_arg(args, long));
	else if (c == 'i' || c == 'd')
		chars.counter = put_decimal(va_arg(args, signed int));
	else if (c == 'u')
		chars.counter = put_usdecimal(va_arg(args, unsigned int));
	else if (c == 'x')
		chars.counter = put_hex(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		chars.counter = put_hex(va_arg(args, unsigned int), 1);
	else if (c == '%')
		chars.counter = ft_putchar(c);
	return (chars.counter);
}
