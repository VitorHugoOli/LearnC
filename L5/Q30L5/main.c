#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    while (num>0)
    {
        if(num%2==0)
        {
            num=num+num;
            printf("o resultado foi:%d\n",num);
        }
        else
        {
            num=num*num;
            printf("o resultado foi:%d\n",num);
        }
        scanf("%d",&num);
    }
    return 0;
}
