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
#include <stdio.h>

void	ft_putptr(void *ptr)
{
	int	i;
	int	n;

	n = 0;
	i = 0;

	write(1, "0x", 2);
	ft_puthxd((int)ptr);
	
}

/*
	HACE BUCLE INFINITO. PILLA EL VALOR DE i CUANDO ptr ES NULO Y ENTRA EN NO TERMINA DE SALIR DEL BUCLE
*/
