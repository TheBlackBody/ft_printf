/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:19:36 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/30 15:18:22 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef struct s_size
{
	int	len;
	int	widht;
}				t_size;

int		ft_printf(const char *str, ...);
char	*ft_strchs(const char *s, int c);
size_t	ft_strlens(const char *a);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar(char c);

#endif
