/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:14:11 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/01 19:05:18 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memmove copies src to dest normally when dst antecedes src in the memory
// and reverses the copy when src antecedes dst in the memory. this is done to
// resolve the problem with possible overlapping memory regions.
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst || !src || n == 0)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	if (dst > src)
		while (n--)
			*(((char *)dst) + n) = *(((char *)src) + n);
	return (dst);
}
