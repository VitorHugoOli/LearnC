#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,M;
    printf("digite o valor de A");
    scanf("%d",&A);
    printf("digite o valor de B");
    scanf("%d",&B);
    M=A;
    A=B;
    B=M;
    printf("o valor de A e B e: %d %d",A, B);
    return 0;
}
