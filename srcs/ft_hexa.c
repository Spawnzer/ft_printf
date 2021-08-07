/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:23:48 by adubeau           #+#    #+#             */
/*   Updated: 2021/07/24 20:35:03 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa(unsigned long long nb, char c)
{
	int		temp;
	char	hexa[100];
	char	*base;
	int		i;

	i = 0;
	if (nb == 0)
		return (i += ft_putchar('0'));
	if (c == 'x' || c == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (nb != 0)
	{
		temp = nb % 16;
		hexa[i] = base[temp];
		i++;
		nb = nb / 16;
	}
	temp = 0;
	while (i-- > 0)
		temp += ft_putchar(hexa[i]);
	return (temp);
}
