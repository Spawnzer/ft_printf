/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:45:50 by adubeau           #+#    #+#             */
/*   Updated: 2021/07/23 11:23:05 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int					ft_printf(const char *str, ...);
int					ft_putchar(char c);
int					ft_putstr(char *str);
int					ft_putnbru(unsigned int nbr);
int					ft_putnbr(int nbr);
int					ft_hexa(unsigned long long nb, char c);
int					ft_get_conversion(va_list ap, int i, const char *s);

#endif
