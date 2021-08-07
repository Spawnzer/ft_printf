/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:22:08 by adubeau           #+#    #+#             */
/*   Updated: 2021/07/24 20:36:51 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (!str)
		return (len += ft_putstr("(null)"));
	while (str[i])
	{
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}
