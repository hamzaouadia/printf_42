/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:40:55 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/06 03:20:58 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	if (!str)
	{
		ft_putstr("(null)", len);
		return ;
	}	
	while (*str)
	{
		ft_putchar(*str, len);
		str++;
	}
}
