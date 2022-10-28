/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:39:05 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/01 19:07:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned char	t_byte;

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(((t_byte *)s) + n) = (t_byte)c;
	return (s);
}
