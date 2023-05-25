/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haouadia <haouadia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:30:28 by haouadia          #+#    #+#             */
/*   Updated: 2022/11/04 09:30:30 by haouadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putstr(char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_nlhex(unsigned int nb, int *len);
void	ft_nuhex(unsigned int nb, int *len);
void	ft_printadd(unsigned long nb, int *len);
void	ft_putn(unsigned int nb, int *len);

#endif