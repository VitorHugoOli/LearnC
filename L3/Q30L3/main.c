#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for(n=2;n<=100;n++)
    {
        if(n%4==0)
        printf("%d\n", n);
    }
    return 0;
}
