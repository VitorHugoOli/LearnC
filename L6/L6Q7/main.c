#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5],i,vt,nw[5];
    for(i=0;i<5;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<5;i++)
            printf("%d\n",vetor[i]);
    for(i=0;i<5;i++){
        vt=4;
        nw[i]=vetor[vt-i];
    }
     for(i=0;i<5;i++)
            printf("invert %d\n",nw[i]);
    return 0;
}
