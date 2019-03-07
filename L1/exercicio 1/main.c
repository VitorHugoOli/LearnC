#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P, I;
    printf("digite seu peso:");
    scanf("%d",&P);
    printf("digite sua idade:");
    scanf("%d",&I);

    switch (P, I)
    {
    case((I>=12) && (P>=60)):
        printf("tomara 40 gotas\n");break;
    default:(P<60)
         printf("o paciente tomara 35 gotas\n");break;

    }
    return 0;
}
