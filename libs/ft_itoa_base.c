/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:46:59 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 17:38:47 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	converted_len(size_t n, char *base);

char	*ft_itoa_base(size_t n, char *base)
{
	t_ools	tool;

	tool.len = converted_len(n, base);
	tool.baselen = ft_strlen(base);
	tool.str = ft_calloc((tool.len + 1), sizeof(char));
	if (!tool.str)
		return (NULL);
	while (tool.len--)
	{
		tool.str[tool.len] = base[n % tool.baselen];
		n /= tool.baselen;
	}
	return (tool.str);
}

static size_t	converted_len(size_t n, char *base)
{
	t_ools	nb;

	nb.len = 1;
	nb.baselen = ft_strlen(base);
	while (n >= nb.baselen)
	{
		n /= nb.baselen;
		nb.len++;
	}
	return (nb.len);
}
