#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,soma1,soma2,cont;
    soma1=0;
    soma2=0;
    for(cont=1;cont<=10;cont++)
    {
       printf("digite um valor qualquer");
       scanf("%d", &num);
       if(num>=10&&num<=20)
        soma1++;
       else
         soma2++;
    }

    printf("os numros dentro do intervalo foram: %d, ja os numeros fora: %d",soma1,soma2);

    return 0;
}
