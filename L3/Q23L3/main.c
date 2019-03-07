#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    double n,u;
    n=1;
    u=1;
    for (cont=1;cont<=20;cont++)
    {
        n=n+u;
        u=n+u;
        printf("%lf\n",n);
        printf("%lf\n",u);

    }
    return 0;
}
