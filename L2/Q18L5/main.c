#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,dem,cont,n=1,contfat,y;
    double S=0,fat=1,x;
    scanf("%lf",&x);
    x=x*0.017453292;
    for(cont=1; cont<=15; cont++)
    {
        y=1;
        for(contfat=1;contfat<=fat;contfat++)
        {
            y=y*contfat;
        }
        if(cont%2==0)
            S=S-pow(x,n)/y;
        else
            S=S+pow(x,n)/y;
        n=n+2;
        fat=fat+2;
    }
    printf("o valor do seno e:%lf",S);
    return 0;
}
