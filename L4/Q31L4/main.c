#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,num,M;
    printf("digite o seu peso na terra: ");
    scanf("%f",&peso);
    printf("selecione um planeta para saber seu peso: ");
    scanf("%f",&num);
    M=peso/9.8;
    if(num==1)
        printf("seu peso em mercurio sera: %f",M*0.37);
    if(num==2)
        printf("seu peso em venus sera: %f",M*0.88);
    if(num==3)
        printf("seu peso em marte sera: %f",M*0.38);
    if(num==4)
        printf("seu peso em jupiter sera: %f",M*2.64);
    if(num==5)
        printf("seu peso em saturno sera: %f",M*1.15);
    if(num==6)
        printf("seu peso em urano sera: %f",M*1.17);

    return 0;
}
