#include <stdio.h>
#include <stdlib.h>
//QUESTAO 4//
int main()
{
    int num;
    float cont;
    cont=0;
    for (num=1;num<=100;num++)
        cont=num+cont;
    printf("%.3f\n",cont/100);
    return 0;
}
