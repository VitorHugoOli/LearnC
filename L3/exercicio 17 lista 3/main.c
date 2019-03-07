#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    for(cont=1000;cont<=1999;cont++)
    {
        if(cont%11==5)
        {
            printf("\no numero e:%d",cont);
        }
    }
    return 0;
}
