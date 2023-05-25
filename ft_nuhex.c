/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nuhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:35:35 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/06 03:14:05 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nuhex(unsigned int nb, int *len)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (nb < 16)
		ft_putchar(str[nb], len);
	if (nb >= 16)
	{
		ft_nuhex(nb / 16, len);
		ft_putchar(str[nb % 16], len);
	}
}
