/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:52:08 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/08 01:26:50 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_if(va_list ptr, char s, int *len)
{
	if (s == 'c')
		ft_putchar(va_arg(ptr, int), len);
	else if (s == 's')
		ft_putstr(va_arg(ptr, char *), len);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(ptr, int), len);
	else if (s == 'u')
		ft_putn(va_arg(ptr, unsigned int), len);
	else if (s == 'x')
		ft_nlhex(va_arg(ptr, unsigned int), len);
	else if (s == 'X')
		ft_nuhex(va_arg(ptr, unsigned int), len);
	else if (s == 'p')
	{
		ft_putstr("0x", len);
		ft_printadd(va_arg(ptr, unsigned long), len);
	}
	else if (s == '%')
		ft_putchar('%', len);
	else
		ft_putchar(s, len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] != '%')
			ft_putchar(s[i], &len);
		else if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			ft_check_if(ptr, s[i + 1], &len);
			i++;
		}
		i++;
	}
	va_end (ptr);
	return (len);
}
