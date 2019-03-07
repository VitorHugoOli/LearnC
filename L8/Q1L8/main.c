#include <stdio.h>
#include <stdlib.h>
 struct endereco
    {
        char nome[34],s[1];
        float id;
    }x[20];
    struct ola
    {
        char voo[12];
        int nvoo,lugarv;
        struct endereco x;
    }y[10];

int main()
{

  int i,j;
  for(i=0;i<20;i++)
    for(j=0;j<15;j++)
{
    scanf("%s ",&y[i].x[j].nome);
    scanf("%f ",&y[i].x[j].id);
    scanf("%s ",&y[i].voo);
    scanf("%d ",&y[i].nvoo);
    scanf("%d ",&y[i].lugarv);

    printf("%s ",y[i].x[j].nome[i]);
    printf("%.0f ",y[i].x[j].id[i]);
    printf("%s ",y[i].voo);
    printf("%d ",y[i].nvoo);
    printf("%d ",y[i].lugarv);


    return 0;
}
}
