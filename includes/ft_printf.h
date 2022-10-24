/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:21:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:18:50 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libraries/libft.h"
# include <stdarg.h>
# include <unistd.h>

# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"
# define DECIMAL_BASE "0123456789"
# define PRECEDING_STR "0x"
# define EXCEPTION_STR "(null)"
# define ZERO_EXCEPTION_STR "(nil)"

// this strut is just a box of tools, t_ools, got it? xD
typedef struct s_counters
{
	int	i;
	int chars;
	int counter;
	char *str;
	char *str2;
	va_list list;
	const char *cnst;
	unsigned long long addr;
}		t_ools;

// printf functions:
int		printf(const char *format, ...);
int		print_format(const char *str, va_list args);
int		parser(int c, va_list args);
// converters_and_printers:
int		_string(char *str);
int		_pointer(long value);
int		_decimal(long value);
int		_usdecimal(long value);
int		_hex(unsigned long long value, int is_upper);
int		_percent(long value);

#endif
