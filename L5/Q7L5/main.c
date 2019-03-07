#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, n, t;
    t=0;
    for(cont=1; cont<=15; cont++)
    {
        printf("digite os numeros: ");
        scanf("%d",&n);
        if(n>30)
            t++;
    }
    printf("%d\n",t);
    return 0;
}
