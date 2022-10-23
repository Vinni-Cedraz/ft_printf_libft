/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:49:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/03 15:41:30 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	char	*start;
	char	*end;
	int		words;
	int		i;

	i = -1;
	words = ft_word_counter(s, c);
	start = (char *)s;
	end = start;
	str_arr = (char **)ft_calloc(words + 1, sizeof(char *));
	while (++i < words)
	{
		while (*end == c && end++)
			if (*end != c)
				start = end;
		end = ft_strchr(start, c);
		if (!end)
			end = end + ft_strlen(start);
		str_arr[i] = ft_substr(start, 0, end - start);
		if (!str_arr[i])
			ft_free_arr(str_arr, (void **)str_arr);
	}
	return (str_arr);
}
