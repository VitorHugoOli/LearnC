#include <stdio.h>
#include <stdlib.h>

int main()
{   float DR;
    printf("digite o valor da bola:\n");
    scanf("%f", &DR);
    switch(DR)
    {
    case 0:
        printf("valor individual: %f", 0.05 * DR);
        break;
    case 1:
        printf("valor individual:%f", 25 * DR);
        printf("valor restante:%f", 0.75 * DR);
        break;
     case 2:
        printf("valor individual: 0.1 * DR \nvalor restante: 0.9 * DR");
        break;
     case 3:
        printf("valor individual: 0.07 * DR \nvalor restante: 0.93 * DR");
        break;
     case 4:
        printf("valor individual: 0.8 * DR \nvalor restante: 0.2 * DR");
        break;
     case 5:
        printf("valor individual: 0.05 * DR \nvalor restante: 0.95 * DR");
        break;
     case 6:
        printf("valor individual: 0.15 * DR \nvalor restante: 0.85 * DR");
        break;
     case 7:
        printf("valor individual: 0.12 * DR \nvalor restante: 0.88 * DR");
        break;
     case 8:
        printf("valor individual: 0.3 * DR \nvalor restante: 0.7 * DR");
        break;
     case 9:
        printf("valor individual: 0.1 * DR \nvalor restante: 0.9 * DR");
        break;
    }


    return 0;

}
