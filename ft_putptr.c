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

int ft_printhxdsizet(size_t nb)
{
	if (nb < 10)
		return (ft_putchar(nb + 48));
	else
		return (ft_putchar(nb - 10 + 'a'));
}

int	ft_puthxdsizet(size_t nb)
{
	int len;

	len = 0;
	if(nb >= 16)
	{
		len += ft_puthxdsizet(nb / 16);
		len += ft_puthxdsizet(nb % 16);
	}
	else
		len += ft_printhxdsizet(nb);
	return (len);
}

int ft_putptr(void *ptr)
{
	write(1, "0x", 2);
	return (ft_puthxdsizet((size_t)ptr) +2);
}

/*
	HACE BUCLE INFINITO. PILLA EL VALOR DE i CUANDO ptr ES NULO Y ENTRA EN NO TERMINA DE SALIR DEL BUCLE
*/
