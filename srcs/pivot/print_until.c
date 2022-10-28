/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_until.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:20:30 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 22:36:05 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// this static aux just checks whether the chars after a % is a format keyword
static int	is_format(char c);

int	print_until(const char *str, va_list args)
{
	t_ools	chars;

	chars.prntd = 0;
	chars.chckd = -1;
	while (str[++chars.chckd])
	{
		if (str[chars.chckd] != '%')
			chars.prntd += ft_putchar(str[chars.chckd]);
		else
		{
			if (is_format(str[++chars.chckd]))
				chars.prntd += parser(str[chars.chckd], args);
			else
				chars.prntd += ft_putchar(str[chars.chckd]);
		}
	}
	return (chars.prntd);
}

static int	is_format(char c)
{
	return (c == 'c'
		|| c == 's'
		|| c == 'p'
		|| c == 'd'
		|| c == 'i'
		|| c == 'u'
		|| c == 'x'
		|| c == 'X'
		|| c == '%');
}
