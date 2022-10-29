/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:50:01 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/28 21:26:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

long	ft_putstr_fd(char *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
}

int	main(void)
{
	void	*ptr;

	ptr = NULL;
	if (ft_printf("%s\n", "Hello World") != printf("%s\n", "Hello World"))
		printf("Error\n");
	else
		printf("OK\n");
	if (ft_printf("%p\n", &main) != printf("%p\n", &main))
		printf("Error\n");
	else
		printf("OK\n");
	if (ft_printf("%p\n", ptr) != printf("%p\n", ptr))
		printf("Error\n");
	else
		printf("OK\n");
	if (ft_printf("%Jas\n") == ft_putstr_fd("%Jas\n", 1))
		printf("Error\n");
	else
		printf("OK\n");
	printf("ft_printf: %d\n", ft_printf("%Jas\n"));
	printf("putstr_fd: %ld\n", ft_putstr_fd("%Jas\n", 1));
}
