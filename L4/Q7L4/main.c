#include <stdio.h>
#include <stdlib.h>

int main()
{
    float S,a1,n,an;
    printf("digite o valor de a1:");
    scanf("%f",&a1);
    printf("digite o valor de n:");
    scanf("%f",&n);
    printf("digite o valor de an:");
    scanf("%f",&an);
    S=(a1+an)*n/2;
    printf("o valor de S e:%f",S);

    return 0;
}
