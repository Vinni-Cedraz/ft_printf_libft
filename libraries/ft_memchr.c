/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:02:35 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/01 21:31:13 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned char	t_uc;

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- != 0)
		if (*(t_uc *)s++ == (t_uc)c)
			return ((t_uc *)s - 1);
	return (NULL);
}
