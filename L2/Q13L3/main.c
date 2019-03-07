#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float n=1, s=0;
    int cont;
    for(cont=1;cont<=50;cont++){
    s=s+(n/cont);
    n=n+2;
    }
    printf("%f\n", s);
    return 0;
}
