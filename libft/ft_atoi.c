/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:49:17 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/08 18:25:58 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	t_ools	nbr;

	nbr.i = 0;
	nbr.sign = 1;
	nbr.result = 0;
	while ((nptr[nbr.i] >= 8 && nptr[nbr.i] <= 13) || nptr[nbr.i] == ' ')
		nbr.i++;
	if (nptr[nbr.i] == '-')
		nbr.sign = -1;
	if (nptr[nbr.i] == '-' || nptr[nbr.i] == '+')
		nbr.i++;
	while (nptr[nbr.i] >= '0' && nptr[nbr.i] <= '9')
	{
		nbr.result = nbr.result * 10 + (nptr[nbr.i] - '0');
		nbr.i++;
	}
	return (nbr.result * nbr.sign);
}
