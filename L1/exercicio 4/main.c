#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("digite um numero do mes");
    scanf("%d", &N);
    while (N != 7){
    switch(N)
     {
        case 1: printf ("Janeiro\n1 trimestre"); break;
        case 2: printf ("Fevereiro\n1 trimestre "); break;
        case 3: printf ("Marco\n1 trimestre"); break;
        case 4: printf ("Abril\n2 trimestre"); break;
        case 5: printf ("Maio\n2 trimestre"); break;
        case 6: printf ("Junho\n2 trimestre"); break;
        case 7: printf ("Julho\n3 trimestre"); break;
        case 8: printf ("Agosto\n3 trimestre"); break;
        case 9: printf ("Setembro\n3 trimestre"); break;
        case 10: printf ("Outubro\n4 trimestre"); break;
        case 11: printf ("Novembro\n4 trimestre"); break;
        case 12: printf ("Dezembro\n4 trimestre"); break;
        default: printf ("Dia do mes invalido\n");

     }

     }

    return 0;
}
