/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:28:57 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 08:02:12 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str, size_t strlen)
{
	t_ools	tool;

	tool.from_start = -1;
	tool.from_end = strlen;
	while (++tool.from_start < strlen / 2)
		ft_swap(&str[tool.from_start], &str[--tool.from_end], sizeof(char));
	return (str);
}
