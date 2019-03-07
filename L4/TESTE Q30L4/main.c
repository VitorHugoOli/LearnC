#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[21];
    printf("digite o num:");
    gets(nome);
    if(strcmp(nome,"norte ida e volta")==0)
    {
       printf("valor 650");
    }
    if(strcmp(nome,"norte ida")==0)
    {
        printf("valor 500");
    }
    if(strcmp(nome,"sul ida e volta")==0)
    {
       printf("valor 1750");
    }
    if(strcmp(nome,"sul ida")==0)
    {
        printf("valor 900");
    }

    return 0;

}

/* float num;
    printf("digite o num:");
    scanf("%f",&num);
    if(num==1)
        num=norte;
    printf("o num:%f",num);
    return 0
*/
