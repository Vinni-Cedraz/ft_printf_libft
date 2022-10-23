/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:22:07 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/22 23:25:52 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	parser(int c, va_list args)
{
	t_count	prntd;

	if (c == 'c')
		prntd.chars = ft_putchar(va_arg(args, int));
	if (c == 's')
		prntd.chars = string(va_arg(args, char *));
	if (c == 'p')
		prntd.chars = pointer(va_arg(args, long));
	if (c == 'i' || c == 'd')
		prntd.chars = decimal(va_arg(args, signed int));
	if (c == 'u')
		prntd.chars = usdecimal(va_arg(args, unsigned int));
	if (c == 'x')
		prntd.chars = hex(va_arg(args, unsigned int), 0);
	if (c == 'X')
		prntd.chars = hex(va_arg(args, unsigned int), 1);
	if (c == '%')
		prntd.chars = percent(c);
	return (prntd.chars);
}
