#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=0,y=0,cont;
    scanf("%d",&i);
    int V1[i],V2[i],T[2*i];
    for(cont=0; cont<i; cont++){
        scanf("%d",&V1[cont]);
    }
    for(cont=0; cont<i; cont++){
        scanf("%d",&V2[cont]);
    }
    for(cont=0; cont<2*i; cont++){
        if(cont%2==0){
            T[cont]=V1[x];
            x++;
        }
        else{
            T[cont]=V2[y];
            y++;
        }
    }
        for(cont=0; cont<2*i; cont++){
            printf("%d ",T[cont]);
    }
    return 0;
}
