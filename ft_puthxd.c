/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:45:51 by aelias-s          #+#    #+#             */
/*   Updated: 2023/02/21 18:54:48 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printhxd(unsigned int nb)
{
	if (nb < 10)
		return (ft_putchar(nb + 48));
	else
		return (ft_putchar(nb - 10 + 'a'));
}

int	ft_puthxd(unsigned int nb)
{
	int len;

	len = 0;
	if(nb >= 16)
	{
		len += ft_puthxd(nb / 16);
		len += ft_puthxd(nb % 16);
	}
	else
		len += ft_printhxd(nb);
	return (len);
}