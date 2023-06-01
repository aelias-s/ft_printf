
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int arr[] = {256, 574, 100, 1000, 10000};
    ft_printf("Hola manin %    p patata", arr);
    printf("\n\n\nHola manin %p patata", arr);
    return 0;
}
