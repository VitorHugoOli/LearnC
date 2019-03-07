#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num=0,den=480;
    double S=0;

    for(num=0;num<=63;num++)
    {
            S=S+pow(2,num);
    }
    printf("pi e: %lf",S);
    return 0;
}
