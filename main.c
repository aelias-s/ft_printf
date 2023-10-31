
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    //int p;
    //char c = 'c';
    //char *s = "patata";
    int d = 0;
    //int hex = -4779;

    //ft_printf("Hola manin %    s patata", array);
    //ft_printf("%c", c);
    //ft_printf("\n");
    //ft_printf("%s", s);
    //ft_printf("\n");
    //ft_printf("%p", &p);
    //ft_printf("\n");
    //ft_printf("%d", 8);
    //ft_printf("\n");
    //ft_printf("\n");
    //ft_printf("%i", d),
    //ft_printf("%u", d);
    //ft_printf("\n");
    //ft_printf("%x", hex);
    //ft_printf("\n");
    //ft_printf("%X", hex);
    //ft_printf("\n");
    //ft_printf("%%");
    ft_printf("    hola       que     tal %    i\n", 2);
    int i = ft_printf("%d", d);
    printf("\n");
    printf("\n%d", i);

    return 0;

}
