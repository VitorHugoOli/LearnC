#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,cont,I;
    I=0;
    printf("digite o divisor:");
    scanf("%d",&A);
    printf("digite o dividendo:");
    scanf("%d",&B);
    if(A<=0)
       A=A*-1;
    if(B<=0)
       B=B*-1;
    for(cont=B;cont>=A;cont=cont-A)
        I++;
    printf("o numero e:%d",I);
    return 0;

}
