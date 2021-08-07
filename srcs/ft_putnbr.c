/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:23:18 by adubeau           #+#    #+#             */
/*   Updated: 2021/07/24 18:08:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nbr)
{
	int			len;
	int			i;
	char		deci[25];
	long		nb;

	i = 0;
	len = 0;
	nb = nbr;
	if (nb == 0)
		len += ft_putchar('0');
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	while (nb > 0)
	{
		deci[i] = nb % 10 + 48;
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
		len += ft_putchar(deci[i--]);
	return (len);
}
