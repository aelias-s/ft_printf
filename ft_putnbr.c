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
/*
int	ft_putnbr(int nb)
{
	int	aux;
	int len;

	aux = 0;
	len = ft_strnmb(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		aux = nb % 10;
		nb = nb / 10;
		if (nb > 0)
		{
			ft_putnbr(nb);
		}
		aux = aux + 48;
		write(1, &aux, 1);
	}
	return (len);
}
*/
int	ft_putnbr(int nb)
{
	int len;

	len = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if(nb > 9)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else if(nb < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(-nb);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}