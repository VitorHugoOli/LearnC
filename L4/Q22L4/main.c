#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num,num2;
    printf("digite o num: ");
    scanf("%f",&num);
    printf("digite o segundo num:");
    scanf("%f",&num2);
    if(num<num2)
    {
        printf("o menor num ao quadrado: %f",num*num);
        printf("o maior num raiz e %f", pow(num2,0.5));

    }
    if(num2<num)
    {
        printf("o menor num ao quadrado: %f",num2*num2);
        printf("o maior num raiz %f", pow(num,0.5));
    }
    return 0;
}
