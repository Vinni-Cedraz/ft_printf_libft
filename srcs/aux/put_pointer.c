/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:15 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/28 13:19:41 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft_includes.h"

int	put_pointer(unsigned long long value)
{
	t_ools	type;

	if (value == 0)
		return (put_string(ZERO_EXCEPTION_STR));
	type.str = ft_itoa_base(value, HEX_BASE);
	type.counter = put_string(PRECEDING_STR);
	type.counter += put_string(type.str);
	return (free(type.str), type.counter);
}
