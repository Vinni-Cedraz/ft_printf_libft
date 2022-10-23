/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:50:20 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/02 00:37:51 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_sz;

	dst_sz = ft_strlen(dst);
	if (size < dst_sz + 1 || size == 0)
		dst_sz = size;
	if (size > dst_sz)
		ft_strlcpy(dst + dst_sz, src, size - dst_sz);
	return (dst_sz + ft_strlen(src));
}
