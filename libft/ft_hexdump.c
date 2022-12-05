/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:46:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 16:25:49 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_print_hexa makes the conversion based on the hex string passed as
// parameter, and recursively calls itself until the number is < 16
static void	ft_print_hexa(char np, char *hex);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i], HEX);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

static void	ft_print_hexa(char np, char *hex)
{
	if (np > 16)
	{
		ft_print_hexa(np / 16, hex);
		ft_print_hexa(np % 16, hex);
	}
	else
		write(1, &hex[(int)np], 1);
}
