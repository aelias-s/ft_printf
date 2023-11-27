/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelias-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:15:05 by aelias-s          #+#    #+#             */
/*   Updated: 2023/03/08 16:29:16 by aelias-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  ft_check(const char *str, int i, va_list arg)
{
    int len;

    len = 0;
    if  (str[i] == 's')
        len = ft_putstr(va_arg(arg, char *));
    else if (str[i] == 'd' || str[i] == 'i')
        len = ft_putnbr(va_arg(arg, int));
    else if (str[i] == 'u')
        len = ft_putuns(va_arg(arg, unsigned int));
    else if (str[i] == 'p')
        len = ft_putptr(va_arg(arg, void *));
    else if (str[i] == 'x' || str[i] == 'X')
    {
        if  (str[i] == 'x')
            len = ft_puthxd(va_arg(arg, int));
        else 
            len = ft_puthxdm(va_arg(arg, int));
    }
    else if (str[i] == 'c')
        len = ft_putchar(va_arg(arg, int));
    else
        len = ft_putchar(str[i]);
    return  (len - 1);
}

int ft_printf(const char *str, ...)
{
    int i;
    int len;
    va_list arg;

    va_start(arg, str);
    i = 0;
    len = 0;
    while (str[i])
    {
        if  (str[i] == '%' && str[i + 1])
        {
            len--;
            i++;
            while (str[i] == 32)
            {
                i++;
                len--;
            }
            len += ft_check(str, i, arg); 
        }
        else
            write(1, &str[i], 1);
        i++;
    }
    va_end(arg);
	return (len + i);
}

/*
EL FT_PUTHXD SOLO TE FUNCIONA CON NÚMEROS ENTEROS POSITIVOS. CAGADA AHI. MARKEL LO TENIA COMO UNSIGNED PERO A MI ME PETA
Y NO ME FIO DEL TODO. 
EL RESTO DE COSAS PARECEN ESTAR BIEN, TE QUEDA EL PUNTERO Y LOS DOS HEXADECIMALES
TIENES QUE CRAFTEARTE UN X_LENG PARA CADA UNA DE LAS FUNCIONES. ¡¡¡QUE NO SE TE OLVIDE HACERLAS ESTATICAS SUBNORMAL!!!
*/