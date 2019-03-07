#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  s=0;
    int x, cont, n=25;
    scanf("%d", &x);
    for(cont=1; cont<=25; cont++)
    {
        x=pow(x,n);
        if(cont%2==0)
        {
            s=s-x/cont;
        }
        else
        {
            s=s+x/cont;
        }
        n--;
    }
    printf("%f\n", s);
    return 0;
}
