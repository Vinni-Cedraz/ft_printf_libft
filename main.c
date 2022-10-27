/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:50:01 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/27 13:03:33 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	void	*ptr;

	ptr = NULL;
	if (ft_printf("%s", "Hello World") != printf("%s", "Hello World"))
		printf("Error");
	else
		printf("OK");
	if (ft_printf("%p\n", &main) != printf("%p\n", &main))
		printf("Error");
	else
		printf("OK");
	if (ft_printf("%p\n", ptr) != printf("%p\n", ptr))
		printf("Error");
	else
		printf("OK");
}
