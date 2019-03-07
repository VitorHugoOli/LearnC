#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int A[5],i,menor,maior,mi,bi;
    char nome[12],bn[12],mn[12];
    for(i=0;i<5;i++){
        scanf("%s",nome);
        scanf("%d",&A[i]);
        if(i==0)
        {
            menor=A[i];
            menor=A[i];
            strcpy(mn,nome);
            strcpy(bn,nome);
            mi=0;
            bi=0;

        }
        if(A[i]<menor){
            strcpy(mn,nome);
            printf("%s",mn);
            menor=A[i];
            mi=i;
        }
        if(A[i]>maior){
            strcpy(bn,nome);
            printf("%s",bn);
            maior=A[i];
            bi=i;
        }
    }
    printf("menor %s %d",mn,menor);
    printf("maior %s %d",bn,maior);
    /*
    int n,sp,nota,menor,maior,cont;
    char nome[12],menornome[12],maiornome[12];
    gets(nome);
    scanf("%d",&nota);
    int A[nota];
    for(cont=0; cont<=3; cont++)
    {
        A[nota]=nota;
        if(cont==0)
        {
            menor=nota;
            maior=nota;
        }
        if(nota<menor)
        {
            menor=nota;
            strcpy(menornome,nome);
        }
        if(nota>maior)
        {
            maior=nota;
            strcpy(maiornome,nome);
        }
        gets(nome);
        scanf("%d",&nota);
    }
    printf("menor %s %d,maior %s %d",menornome,A[menor],maiornome,A[maior]);
*/
    return 0;
}
