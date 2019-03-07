#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s=0;
    int n=10, num=480, cont;

    for(cont=1; cont<=30; cont++)
    {

        if(cont%2==0)
        {
            s=s -num/n;
        }
        else
        {
            s= s +num/n;
        }

        n=n+1;
        num=num-5;
    }
    printf("valor: %lf\n", s);
    return 0;
}
