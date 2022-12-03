/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:00:43 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/15 22:20:05 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned char	*t_uc_ptr;

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (*((t_uc_ptr)s1 + i) != *((t_uc_ptr)s2 + i))
			return (*((t_uc_ptr)s1 + i) - *((t_uc_ptr)s2 + i));
	return (0);
}
