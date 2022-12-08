/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:33:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/28 20:18:59 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft_includes.h"

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
