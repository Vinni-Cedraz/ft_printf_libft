/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:33:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 23:18:23 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	string(char *str)
{
	t_ools prntd;

	prntd.count = 0;
	if (!str)
		str = EXCEPTION_STR;
	while (str[prntd.count] != '\0')
		prntd.count += ft_putchar(str[prntd.count]);
	return (prntd.count);
}
