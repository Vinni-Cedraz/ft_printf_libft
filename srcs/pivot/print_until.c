/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_until.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:20:30 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/28 16:48:08 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft_includes.h"

int	print_until(const char *str, va_list args)
{
	t_ools	chars;

	chars.prntd = 0;
	chars.chckd = -1;
	while (str[++chars.chckd])
	{
		if (str[chars.chckd] != '%')
			chars.prntd += ft_putchar(str[chars.chckd]);
		else if (is_format(str[chars.chckd + 1]))
			chars.prntd += parser(str[++chars.chckd], args);
		else
			chars.prntd += ft_putchar(str[chars.chckd]);
	}
	return (chars.prntd);
}
