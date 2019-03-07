#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("digite o numero do dia\n");
    scanf("%d", &N);
    switch(N)
    {
    case 1: printf("segunda\n");break;
    case 2: printf("terca\n");break;
    case 3: printf("quarta\n");break;
    case 4: printf("quinta\n");break;
    case 5: printf("sexta\n");break;
    case 6: printf("sabado\n");break;
    case 7: printf("domingo\n");break;
    default (N<1 && N>7):
    printf("mes invalido\n");
    }
    return 0;
}
