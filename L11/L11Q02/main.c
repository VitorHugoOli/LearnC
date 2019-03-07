#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main()
{
    int i,S1=0,S2=0,S3=0,S4=0,S5=0;
    char voto[3];
    FILE *eleicao;
    eleicao=fopen("votos.txt","r");
    for(i=0;i<tam;i++){
        fgets(voto,3,eleicao);
        if(voto[0]-48==1)
            S1++;
        if(voto[0]-48==2)
            S2++;
        if(voto[0]-48==3)
            S3++;
        if(voto[0]-48==4)
            S4++;
        if(voto[0]-48==5)
            S5++;
    }
    printf("1 %d\n",S1);
    printf("2 %d\n",S2);
    printf("3 %d\n",S3);
    printf("4 %d\n",S4);
    printf("5 %d\n",S5);

    return 0;
}
