#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S1[5],i,vt,S2[5],T[5];
    for(i=0;i<5;i++){
        scanf("%d",&S1[i]);
        scanf("%d",&S2[i]);
        T[i]=S1[i]+S2[i];
    }
    for(i=0;i<5;i++)
    printf("%d\n",T[i]);
    return 0;
}
