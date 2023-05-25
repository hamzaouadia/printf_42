/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:46:25 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/06 03:15:12 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printadd(unsigned long nb, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(str[nb], len);
	if (nb >= 16)
	{
		ft_printadd(nb / 16, len);
		ft_putchar(str[nb % 16], len);
	}
}
