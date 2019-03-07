#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cidade,num;
    printf("1-norte\n2-nordeste\n3-centro-oeste\n4-sul\n");
    printf("digite o nome do destino: ");
    scanf("%d", &cidade);
    printf("caso sua viaje seja de ida digite 9, caso contrario 8:");
    scanf("%d", &num);
    if(cidade==1 && num==9)
    {
      printf("norte\nida=500");
    }
    if (cidade==1 && num==8)
    {
        printf("norte\nida e volta=900");
    }
    if(cidade==2 && num==9)
    {
      printf("n\nordeste=350");
    }
    if (cidade==2 && num==8)
    {
        printf("nordeste\nida e volta=650");
    }
    if(cidade==3 && num==9)
    {
      printf("centro-oeste\nida=350");
    }
    if (cidade==3 && num==8)
    {
        printf("centro-oeste\nida e volta=600");
    }
    if(cidade==4 && num==9)
    {
      printf("sul\nida=300");
    }
    if (cidade==4 && num==8)
    {
        printf("sul\nida e volta=550");
    }

    return 0;
}
