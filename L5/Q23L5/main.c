#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,L,B;
    scanf("%d",&num);
    L=num;
    B=num;
    while(num!=-1)
    {
        if(num>B)
            B=num;
        if(num<L)
            L=num;
        scanf("%d",&num);
    }
    printf("maior:%d,menor:%d",B,L);
    return 0;
}
