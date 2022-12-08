/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:38:22 by sfernand          #+#    #+#             */
/*   Updated: 2022/12/08 17:37:05 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_arg(va_list arg, const char *str, t_size size)
{
	if (*str == 'c')
		size.len += ft_putchar_fd(va_arg(arg, int), 1);
	else if (*str == 's')
		size.len += ft_putstr_fd(va_arg(arg, const char *), 1);
	else if (*str == 'p')
		size.len += ft_void_hexa(va_arg(arg, unsigned long int));
	else if (*str == 'd' || *str == 'i')
		size.len += ft_putnbr_fd(va_arg(arg, int), 1);
	else if (*str == 'u')
		size.len += ft_putunbr_fd(va_arg(arg, unsigned int), 1);
	else if (*str == 'x' || *str == 'X')
		size.len += ft_hexa(va_arg(arg, unsigned int), *str);
	else if (*str == '%')
		size.len += ft_putchar_fd('%', 1);
	return (size.len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	t_size	size;

	va_start(arg, str);
	size.len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			ft_arg(arg, str + 1, size);
			size.len += 1;
			str++;
		}
		else if (*str == ' ')
			size.len += ft_putchar_fd(*str, 1);
		else if (*str != '%' && *str != ' ')
			size.len += ft_putchar_fd(*str, 1);
		str++;
	}
	va_end(arg);
	return (size.len);
}
