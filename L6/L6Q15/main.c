#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,cont,menor;
    scanf("%d",&i);
    int V1[i];
    for(cont=0; cont<i; cont++){
        scanf("%d",&V1[cont]);
        if(cont==0){
           menor=V1[cont];
           z=cont;
        }
        if(V1[cont]<menor){
            menor=V1[cont];
            z=cont;
        }
    }
    x=menor;
    for(cont=0; cont<i; cont++){
        while (V1[cont]<=x){
        if(V1[cont]==x)
           y=x;
           V1[cont]=menor;
           V1[z]=menor;
        x++;
        }
        menor++;
    }


    }


    return 0;
}
