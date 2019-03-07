#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,S,I;
    S=0;
    I=0;
    while(num>=0)
    {
        scanf("%d",&num);
        S=S+num;
        I++;
    }
    printf("%d",(S+1)/(I-1));
    return 0;
}
