#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],menorN,maiorN,i,menor,maior;
    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
        if(i==0){
            menor=vetor[i];
            maior=vetor[i];
            menorN=vetor[i];
            maiorN=vetor[i];
        }
        if(vetor[i]<menor)
            menorN=i;
        if(vetor[i]>maior)
            maiorN=i;
    }
    printf("maior vetor[%d]= %d,menor vetor[%d]= %d, ",menorN,vetor[menorN],maiorN,vetor[maiorN]);
    return 0;
}
