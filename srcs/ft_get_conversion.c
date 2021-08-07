/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:24:19 by adubeau           #+#    #+#             */
/*   Updated: 2021/07/23 11:03:03 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_get_conversion(va_list ap, int i, const char *s)
{
	int	len;

	len = 0;
	if (s[i] == 'c')
		len += ft_putchar((char)va_arg(ap, int));
	else if (s[i] == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (s[i] == 'x' || s[i] == 'X')
		len += ft_hexa((unsigned int)va_arg(ap, int), s[i]);
	else if (s[i] == 'p')
	{
		len += write(1, &"0x", 2);
		len += ft_hexa((unsigned long long int)va_arg(ap, long long int), s[i]);
	}
	else if (s[i] == 'i' || s[i] == 'd')
		len += ft_putnbr((int)va_arg(ap, int));
	else if (s[i] == '%')
		len += ft_putchar('%');
	else if (s[i] == 'u')
		len += ft_putnbru((unsigned int)va_arg(ap, int));
	return (len);
}
