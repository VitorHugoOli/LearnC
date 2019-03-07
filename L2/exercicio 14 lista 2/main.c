#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n;
        printf("digite o numero para calcular o fatorial:");
        scanf("%d",&n);
     for(num=1;n>1;n=n-1)
       {
        num=num*n;
       }
       printf("\nFatorial calculado: %d", num);
    return 0;
}
