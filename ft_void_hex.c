/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:46:01 by sfernand          #+#    #+#             */
/*   Updated: 2022/12/05 16:42:08 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"
#include "./libft/libft.h"

int	ft_hexa_len(uintptr_t  hexa)
{
	int	len;

	len = 0;
	while (hexa != 0)
	{
		len++;
		hexa = hexa / 16;
	}
	return (len);
}

void	ft_put_hexa(uintptr_t  hexa)
{
	if (hexa <= 9)
		ft_putchar_fd((hexa + '0'), 1);
	else
		ft_putchar_fd((hexa - 10 + 'a'), 1);
}

int	ft_void_hexa(unsigned long int hexa)
{
	int	printlen;

	printlen = 0;
	printlen += write(1, "0x", 2);
	if (hexa == 0)
	{
		printlen += write(1, "0", 1);
	}
	else
	{
		ft_put_hexa(hexa);
		printlen += ft_hexa_len(hexa);
	}
	return (printlen);
}
