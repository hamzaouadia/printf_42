/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nlhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:35:19 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/10 03:01:22 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nlhex(unsigned int nb, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(str[nb], len);
	if (nb >= 16)
	{
		ft_nlhex(nb / 16, len);
		ft_putchar(str[nb % 16], len);
	}
}
