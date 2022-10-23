/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:51:28 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/09/27 22:24:13 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned int	t_uint;

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (start > (t_uint)ft_strlen(s))
		return (ft_strdup(""));
	if (len > ((t_uint)ft_strlen(s) - start))
		return (ft_strdup(s + start));
	return ((char *)ft_memmove(ft_calloc(len + 1, 1), s + start, len));
}
