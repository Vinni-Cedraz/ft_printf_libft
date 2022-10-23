/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:21:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 00:03:14 by vcedraz-         ###   ########.fr       */
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

typedef struct s_counters
{
	int	i;
	int	chars;
}		t_count;

int		ft_printf(const char *format, ...);
int		is_format(char c);
int		filter(char *str, va_list args);

int		print_format(const char *str, va_list args);
int		parser(int c, va_list args);
int		string(char *str);
int		pointer(long value);
int		decimal(long value);
int		usdecimal(long value);
int		hex(unsigned long long value, int is_upper);
int		percent(long value);

#endif
