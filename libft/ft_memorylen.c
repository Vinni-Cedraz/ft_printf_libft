/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memorylen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:00:29 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 09:23:11 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// this function is used to check how many bytes were callocked and return the
// number of bytes callocked

size_t	ft_memorylen(void *ptr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((char *)ptr)[i] == '\0')
		i++;
	}
	return (i);
}
