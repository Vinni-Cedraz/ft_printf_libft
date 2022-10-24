/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _string.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:15:56 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	_string(char *str)
{
	int i;

	i = 0;
	if (!str)
		str = EXCEPTION_STR;
	while (str[i] != '\0')
		i += ft_putchar(str[i]);
	return (i);
}
