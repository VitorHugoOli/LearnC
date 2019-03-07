#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t=0, x=0;
    scanf("%d", &n);
    while (n>0)
    {

        if(n%3==0)
        {
            t++;
            x=x+n;
        }
    scanf("%d", &n);
    }
    printf("media: %d\n", x/t);
    return 0;
}
