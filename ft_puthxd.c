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

static void 	ft_printnbr(int nb)
{
	if (nb < 10)
		nb += 48;
	else
		nb = nb - 10 + 'a';
	write(1, &nb, 1);
}
void			ft_puthxd(int nb)
{
	int	aux;

	aux = 0;
	write(1, "0x", 2);
	if (nb == -2147483648)
		write(1, "-80000000", 9);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		aux = nb % 16;
		nb = nb / 16;
		if (nb > 0)
		{
			ft_puthxd(nb);
		}
		ft_printnbr(aux);
	}
}
