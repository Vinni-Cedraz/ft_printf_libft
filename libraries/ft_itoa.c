/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:40:59 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/02 00:22:45 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define INT_MIN -2147483648

char	*ft_itoa(int n)
{
	int		i;
	int		abs_n;
	char	*res;

	i = 0;
	abs_n = ft_abs(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	res = ft_calloc(ft_numlen(n) + 1, sizeof(char));
	while (abs_n != 0)
	{
		res[i++] = abs_n % 10 + '0';
		abs_n /= 10;
	}
	if (n > 0)
		return (ft_strrev(res));
	ft_strlcat(res, "-", ft_numlen(n) + 2);
	return (ft_strrev(res));
}
