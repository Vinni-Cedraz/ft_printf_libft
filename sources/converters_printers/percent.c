/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 23:32:44 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/23 23:12:12 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	handle_percent(char c)
{
	t_ools prntd;

	prntd.count = 0;
	ft_putchar(c);
	return (prntd.count + 1);
}
