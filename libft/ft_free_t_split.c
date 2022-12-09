/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:32:53 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/09 15:35:33 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_t_split(t_split *split)
{
	ft_free_arr(split->str_arr, (void**)split->str_arr);
	free(split);
}
