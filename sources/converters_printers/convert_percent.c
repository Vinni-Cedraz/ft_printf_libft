/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022 23:32:44 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 12:55:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_percent(long c)
{
	t_ools	type;

	type.counter = 0;
	ft_putchar(c);
	return (type.counter + 1);
}
