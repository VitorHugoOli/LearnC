#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,S;
    S=0;
    while(num>=0)
    {
        scanf("%d",&num);
        S=S+num;
    }
    printf("%d",S+1);
    return 0;
}
