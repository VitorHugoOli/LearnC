#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     int cont, n=0, s;
    for(cont=1;cont<=64;cont++){
            n++;
            s=pow(2,n);
    }
    printf("valor: %f\n", s);
    return 0;
}
