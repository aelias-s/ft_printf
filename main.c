
#include "ft_printf.h"
#include <stdio.h>

int main()
{
    //char c = 'p';
    //char *p = &c;
    //char *s;
    //float d = 3456.65;
    //unsigned int hex = 214749;
    //unsigned int mhex = 104;
    //int i = printf("%x\n", mhex);
    //int i2 = ft_printf("%x", mhex);
    //int i = ft_printf("%s", "0x");
    int i = printf("%p\n", "");
    int i2 = ft_printf("%p\n", "");
    
    printf("%d", i);
    printf(" : %d", i2);

    return 0;

}
