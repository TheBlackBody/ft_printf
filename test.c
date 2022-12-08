/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:17:20 by sfernand          #+#    #+#             */
/*   Updated: 2022/12/08 17:07:22 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

void	n(void)
{
	write(1, "\n", 2);
}

int	main(void)
{
	char *test;
	test = "test";
	ft_printf(" %c %c %c ", '0', 0, '1');
	n();
	ft_printf("%s", test);
	n();
	ft_printf(" %d", ft_printf("%s", test));
	n();
	ft_printf("%p", test);
	n();
	ft_printf("%i 151");
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
	printf(" %d", printf("%s", test));
	return (0);
}
