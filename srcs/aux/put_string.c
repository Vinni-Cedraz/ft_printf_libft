/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 20:21:20 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_string(char *str)
{
	t_ools	type;

	type.counter = 0;
	if (!str)
		str = EXCEPTION_STR;
	while (str[type.counter] != '\0')
		type.counter += ft_putchar(str[type.counter]);
	return (type.counter);
}
