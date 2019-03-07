#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
    printf("digite seu numero: ");
    scanf("%d", &n);
    if(n==5 || n==200 || n==400)
    {
        printf("numero correto");
    }
    else
    {
        printf("\nnumero incorreto");
    }
    printf("  e  ");
    if(n>=500 && n<=1000)
    {
        printf("esta no intervalo correto");
    }
    else
    {
        printf("\nnao esta no intervalo correto");
    }
    return 0;
}
