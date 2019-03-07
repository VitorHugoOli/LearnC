#include <stdio.h>
#include <stdlib.h>

int main()
{   int N,H,O,U;
        O=0;
        U=0;
    for(N=1;N<5;N++){
        printf("um numero qualquer:");
        scanf("%d", &H);
         if(H%2==0) O++;
         else U++;
    }

     printf("o numero  par:%d/n", O);
     printf("o numero e impar:%d",U);
    return 0;
}
