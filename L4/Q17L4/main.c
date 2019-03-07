#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("digite um num:");
    scanf("%d",&num);
    if(num%3==0)
    {
        printf("divisivel por 3\n");
    }
    if(num%7==0)
    {
        printf("divisivel por 7");
    }
    return 0;
}
