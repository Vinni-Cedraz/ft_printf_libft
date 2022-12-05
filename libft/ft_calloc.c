/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:01:20 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/03 21:19:50 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	mal0_clear(t_uc *p, size_t n);

void	*ft_calloc(size_t m, size_t n)
{
	void	*p;

	if (n && m > (size_t)-1 / n)
	{
		return (0);
	}
	n *= m;
	p = malloc(n);
	if (!p)
		return (p);
	n = mal0_clear(p, n);
	return (ft_memset(p, 0, n));
}

static size_t	mal0_clear(t_uc *p, size_t n)
{
	t_uc			*pp;
	register t_ools	page;

	page.size = 4096;
	if (n < page.size)
		return (n);
	pp = p + n;
	page.i = (long)pp & (page.size - 1);
	while (1)
	{
		pp = ft_memset(pp - page.i, 0, page.i);
		if ((size_t)(pp - p) < page.size)
			return (pp - p);
		page.i = page.size;
		while (page.i)
		{
			page.i -= 2 * sizeof(t_uc);
			pp -= 2 * sizeof(t_uc);
			if (pp[-1] | pp[-2])
				break ;
		}
	}
}
