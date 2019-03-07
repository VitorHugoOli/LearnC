#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distmeet2,distmeet1,disttotal,v1,v2,d1,d2,t;
    printf("digite o valor da velocidades v1,v2:");
    scanf("%f,%f",&v1,&v2);
    printf("digite o valor da distancia total:");
    scanf("%f",&disttotal);
    distmeet2=(disttotal*v2)/(v1+v2);
    t=disttotal/(v1+v2);
    distmeet1=t*v1;
    printf("o valor do tempo e: %f\n",t);
    printf("o valor das dsitancias de 2 e 1 e: %f, %f",distmeet2,distmeet1);
    return 0;
}
