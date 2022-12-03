/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:55:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 17:50:14 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lil_sz;

	i = -1;
	lil_sz = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (big[++i] && i < len)
		if (!ft_strncmp(big + i, little, lil_sz) && i + lil_sz <= len)
			return ((char *)(big + i));
	return (NULL);
}
