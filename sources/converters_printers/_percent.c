/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _percent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:32:44 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/24 00:17:31 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	_percent(long c)
{
	t_ools type;

	type.counter = 0;
	ft_putchar(c);
	return (type.counter + 1);
}
