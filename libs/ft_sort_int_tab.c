/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:25:09 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/19 08:00:39 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_int_tab(size_t *tab, size_t size)
{
	size_t	i;
	size_t	begin;

	i = 0;
	begin = 0;
	while (i < size - 1)
	{
		while (begin < size - 1)
		{
			if (tab[begin] > tab[begin + 1])
			{
				ft_swap(&tab[begin], &tab[begin + 1], sizeof(size_t));
			}
			begin++;
		}
		i++;
	}
}
