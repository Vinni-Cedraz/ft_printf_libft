/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:31:03 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/19 19:17:02 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_ools	tool;

	if (!s1 || !s2)
		return (NULL);
	tool.len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tool.res = malloc(tool.len);
	ft_strlcpy(tool.res, s1, tool.len);
	ft_strlcat(tool.res, s2, tool.len);
	return (free((char *)s1), free((char *)s2), tool.res);
}
