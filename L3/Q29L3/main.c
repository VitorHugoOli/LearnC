#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num;
    num=1;
    for(n=2;n<100;n++)
    {
        num=n+num;
        printf ("%d\n",num);
    }

    return 0;
}
