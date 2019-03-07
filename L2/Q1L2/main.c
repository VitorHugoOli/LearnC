#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso,idade;
    scanf("%d",&peso);
    scanf("%d",&idade);
    if(idade>12)
    {
        if(peso>=60)
            printf("40 gotas");
        if(peso<60)
            printf("35 gotas");
    }
    if(idade<12)
    {
        if(peso>=5 && peso<9)
            printf("5 gotas");
        if(peso>=9 && peso<16)
            printf("10 gotas");
        if(peso>=16 && peso<24)
            printf("15 gotas");
        if(peso>=24 && peso<30)
            printf("30 gotas");
        if(peso>=30)
            printf("35 gotas");
    }



}

