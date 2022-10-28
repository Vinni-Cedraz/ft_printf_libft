/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:50:01 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 17:18:02 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

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
}
