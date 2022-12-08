/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_usdecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 17:57:52 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft_includes.h"

int	put_usdecimal(long value)
{
	t_ools	type;

	type.str = ft_itoa_base(value, DECIMAL_BASE);
	type.counter = put_string(type.str);
	return (free(type.str), type.counter);
}
