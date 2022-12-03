/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:28:03 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 09:07:51 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_int_tab(size_t *tab, size_t size)
{
	t_ools	tool;

	tool.from_start = 0;
	tool.from_end = size - 1;
	while (tool.from_start < (size / 2))
	{
		ft_swap(&tab[tool.from_start], &tab[tool.from_end], sizeof(size_t));
		tool.from_start++;
		tool.from_end--;
	}
}
