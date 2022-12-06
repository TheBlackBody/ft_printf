/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:17:20 by sfernand          #+#    #+#             */
/*   Updated: 2022/12/06 16:34:28 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"
#include "./libft/libft.h"
#include <stdio.h>

void	n(void)
{
	write(1, "\n", 2);
}

int	main(void)
{
	char *test;
	test = "test";
	ft_printf("%c", 'c');
	n();
	ft_printf("%s", "Bo@$KO)EXLS)_%jour");
	n();
	ft_printf("%p", test);
	n();
	ft_printf("%i", 151);
	n();
	ft_printf("%d", 151);
	n();
	ft_printf("%u", 111);
	n();
	ft_printf("%x", 74657374);
	n();
	ft_printf("%X", 74657374);
	n();
	ft_printf("%%");
	n();
	printf("%p", test);
	return (0);
}
