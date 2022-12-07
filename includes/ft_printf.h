/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:21:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/07 19:53:33 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define HEX_BASE "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"
# define DECIMAL_BASE "0123456789"
# define PRECEDING_STR "0x"
# define EXCEPTION_STR "(null)"
# define ZERO_EXCEPTION_STR "(nil)"

// this strut is just a box of tools, t_ools, got it? xD
typedef struct s_tools
{
	size_t	i;
	size_t	chars;
	size_t	counter;
	size_t	prntd;
	size_t	chckd;
	char	*str;
	char	**str_arr;
	char	*res;
	char	*tmp;
	char	*start;
	char	*to_ascii;
	char	*end;
	size_t	len;
	size_t	size;
	size_t	words;
	size_t	half;
	size_t	baselen;
	size_t	sign;
	size_t	from_start;
	size_t	from_end;
	size_t	result;
	size_t	abs;
	size_t	max;
	char	*lnbrk;
	char	*read;
	char	*wth_all;
	char	*bfr_brk;
	char	*aftbrk;
	int		aftbrk_len;
	int   	bfrbrk_len;
	va_list	list;
}	t_ools;

// PRINTF PROTAGONISTS:

// The ft_printf function initializes a list of the type va_list, and then
// calls the print_until function, which will be responsible for managing the
// whole parsing process keeping track of how many chars were printed and
// returning that number to the ft_printf function. Which will then end the
// list and return the number of chars printed.
int	ft_printf(const char *format, ...);

/* The print_until function prints the chars until a % is found. Then it sends
the char right after it to the is_format function, which will check if it's the
indicator of a special format. In which case, it will send it to the parser
function, where the auxiliary functions will be called to print the desired
format, this function manages the whole dynamic of the project */
int	print_until(const char *str, va_list args);

/* The is_format function checks if the char after the % is a valid format */
int	is_format(char c);

/* the parser function identify which of the format indicators were sent to it
from the options: "c, s, p, i, u, x, X, %" 
 c = char -> is sent to libft's ft_putchar

 s = string -> is sent to aux put_string

 p = pointer address -> is sent to aux PUT_POINTER where ft_itoa_base is called 
		convert the address to a string of hex and PUT_STRING is called to print it

 i = integer -> is sent to aux PUT_DECIMAL where ft_itoa_base is called to con-
vert the integer to a string and PUT_STRING is called to print it

 u = unsigned integer -> sent to put_usdecimal where same as above will happen 
execpt that no negative numbers will be returned

 x = hexadecimal -> sent to PUT_HEX where FT_ITOA_BASE is called to convert 

 X = hexadecimal uppercase -> same but int IS_UPPER is set to true

 % = prints a single percent sign -> easily done with FT_PUTCHAR */
int	parser(int c, va_list args);

// auxiliary functions (writers):
int	put_string(char *str);
int	put_pointer(unsigned long long value);
int	put_decimal(long value);
int	put_usdecimal(long value);
int	put_hex(unsigned long long value, int is_upper);

#endif
