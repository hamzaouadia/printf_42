/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 03:01:02 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/06 03:16:47 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putn(unsigned int nb, int *len)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else
		ft_putchar(nb + '0', len);
}
