#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cont,cont2,expo,num;
    double fat,sen,x;
    printf("o angulo:\n");
    scanf("%lf",&x);
    //transformando de angulo em radiano
    x=x*0.017453292519944;
    num=1;
    expo=1;
    sen=0;
    for(cont2=1; cont2<=15; cont2++)
    {
        fat=1;
        for(cont=num; cont>1; cont--)
        {
            fat=fat*cont;
        }
        //num do fatorial
        num=num+2;
        //seno
        if(cont2%2!=0)
            sen=sen+pow(x,expo)/fat;
        else
            sen=sen-pow(x,expo)/fat;
        //expoente
        expo=expo+2;
    }
    printf("o sen:%lf\n",sen);
}

