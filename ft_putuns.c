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


int	ft_putuns(unsigned int nb)
{
	int len;

	len = 0;
	if(nb > 9)
	{
		len += ft_putuns(nb / 10);
		len += ft_putuns(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}