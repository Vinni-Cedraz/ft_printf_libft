/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:35:52 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/01 23:55:53 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (ft_strlen(src) + 1 < size)
		return (ft_strlen(ft_memmove(dst, src, ft_strlen(src) + 1)));
	if (!size)
		return (ft_strlen(src));
	ft_memmove(dst, src, size - 1);
	*(dst + size - 1) = '\0';
	return (ft_strlen(src));
}
