/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:19:30 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/22 23:26:28 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_format(const char *str, va_list args)
{
	int		i;
	t_count	hw_mny;

	i = 0;
	hw_mny.chars = 0;
	while (str[i])
	{
		if (str[i] != '%')
			hw_mny.chars += ft_putchar(str[i]);
		else if ((str[i] == '%') && str[i + 1])
		{
			i++;
			if (is_format(str[i]))
				hw_mny.chars += parser(str[i], args);
			else if (str[i])
				hw_mny.chars += ft_putchar(str[i]);
		}
		i++;
	}
	return (hw_mny.chars);
}
