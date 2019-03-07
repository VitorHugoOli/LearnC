#include <stdio.h>
#include <stdlib.h>
void ex ()
{
    float I;
    while(I != 999){
        printf("digite a sua ideade\n");
        scanf("%f", &I);

        if(I<16){
            printf("nao eleitor\n");}
        else if(I>=18 && I<65){
            printf("eleitor obrigatorio\n");}
        else {
            printf("eleitor facutativo\n");}
    }
}
int main()
{
    ex();

    return 0;
}
