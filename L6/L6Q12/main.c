#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5],i,vt,invert[5];
    for(i=0;i<5;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<5;i++)
            printf("%d\n",vetor[i]);
    for(i=0;i<5;i++){
        vt=4;
        invert[i]=vetor[vt-i];
    }
     for(i=0;i<5;i++)
            printf("%d\n",invert[i]);
    return 0;
}
