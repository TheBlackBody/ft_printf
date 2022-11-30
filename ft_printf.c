/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:38:22 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/30 16:14:20 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"
#include "./libft/libft.h"

const char	*ft_arg(va_list arg, const char *str, t_size size)
{
	if (*str == 'c')
		size.len += 1, ft_putchar_fd(va_arg(arg, int), 1);//ftputchar
	/*else if (*str == 's')
		size.len += ;
	else if (*str == 'p')
		size.len += ;
	else if (*str == 'd' || *str == 'i')
		size.len += ;
	else if (*str == 'u')
		size.len += ;
	else if (*str == 'x' || *str == 'X')
		size.len += ;
	else if (*str == '%')
		size.len += ;*/
	return (str);
}

const char	*ft_read(t_size size, const char *str)
{
	char	*next;

	next = ft_strchr(str, size.len);
	if (next)
		size.widht = str - next;
	else
		size.widht = ft_strlen(str);
	write(1, str, size.widht);
	size.len += size.widht;
	while (*str && *str != '%')
		str++;
	return (str);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	t_size	size;

	va_start(arg, str);
	size.len = 0;
	size.widht = 0;
	while (*str)
	{
		if (*str == '%')
			str = ft_arg(arg, str + 1, size);
		else
			str = ft_read(size, str);
		if (!str)
		{
			write(1, "null", 6);
			va_end(arg);
			return (size.len);
		}
		str++;
	}
	va_end(arg);
	return (size.len);
}

#include <stdio.h>

int	main(void)
{
	ft_printf("%c");
	printf("cds");
	return (0);
}
