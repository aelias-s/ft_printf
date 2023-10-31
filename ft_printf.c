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

static int ft_check(const char *str, int i, va_list arg)
{
    int len;

    if (str[i] == 's')
        len = ft_putstr(va_arg(arg, char *));
    else if (str[i] == 'd' || str[i] == 'i')
        len = ft_putnbr(va_arg(arg, int));
    else if (str[i] == 'u')
        /*len = */ft_putuns(va_arg(arg, unsigned int));
    else if (str[i] == 'p')
        /*len = */ft_putptr(va_arg(arg, void *));
    else if (str[i] == 'x' || str[i] == 'X')
    {
        write(1, "0x", 2);
        if (str[i] == 'x')
            /*len = */ft_puthxd(va_arg(arg, int));
        else 
            /*len = */ft_puthxdm(va_arg(arg, int));
    }
    else if (str[i] == 'c')
        len = ft_putchar(va_arg(arg, int));
    else
        len = ft_putchar(str[i]);
    return (len);
}

int ft_printf(const char *str, ...)
{
    int     i;
    //escrito por bvelasco
    int len;
    len = 0;
    //escrito por mi
    va_list arg;

    va_start(arg, str);
    i = 0;
    while(str[i])
    {
        if (str[i] == '%' && str[i + 1])
        {
            i++;
            while (str[i] == 32)
                i++;
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
TE FALTA TERMINAR EL PUTPTR. ES UNA TONTERIA LO QUE TE QUEDA
TAMBIÉN TE FALTA EL TEMA DE DEVOLVER LA LENG DE CADA FUNCION (SON TODOS VOID) PARA QUE LA FUNCIÓN FINAL DEVUELVA LA LENG REAL.
AHORA SOLO DEVUELVE LA LENG DEL STR INICIA.
TIENES QUE CRAFTEARTE UN X_LENG PARA CADA UNA DE LAS FUNCIONES. ¡¡¡QUE NO SE TE OLVIDE HACERLAS ESTATICAS SUBNORMAL!!!
*/