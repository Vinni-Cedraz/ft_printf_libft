/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:40:59 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/18 10:16:21 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	t_ools	nb;

	nb.i = 0;
	nb.abs = ft_abs(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	nb.len = ft_numlen(n);
	nb.to_ascii = ft_calloc(nb.len + 1, sizeof(char));
	while (nb.abs != 0)
	{
		nb.to_ascii[nb.i++] = nb.abs % 10 + '0';
		nb.abs /= 10;
	}
	if (n > 0)
		return (ft_strrev(nb.to_ascii, nb.len));
	ft_strlcat(nb.to_ascii, "-", nb.len + 1);
	return (ft_strrev(nb.to_ascii, nb.len));
}
