/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_libft_structs.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:19:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/08 17:08:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_LIBFT_STRUCTS_H
# define PRINTF_LIBFT_STRUCTS_H

# include <stdarg.h>
# include <stdlib.h>

typedef unsigned char	t_uc;

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

typedef struct s_plit
{
	char				*end;
	char				*start;
	char				**str_arr;
	size_t				i;
	size_t				words;

}						t_split;

// this struct is just a box of tools, t_ools, got it? xD
typedef struct s_tools
{
	size_t				i;
	size_t				chars;
	size_t				counter;
	size_t				prntd;
	size_t				chckd;
	char				*str;
	char				*res;
	char				*tmp;
	char				*to_ascii;
	size_t				len;
	size_t				size;
	size_t				half;
	size_t				baselen;
	size_t				sign;
	size_t				from_start;
	size_t				from_end;
	size_t				result;
	size_t				abs;
	size_t				max;
	char				*lnbrk;
	char				*read;
	char				*wth_all;
	char				*bfr_brk;
	char				*aftbrk;
	int					aftbrk_len;
	int					bfrbrk_len;
	va_list				list;
}						t_ools;

#endif
