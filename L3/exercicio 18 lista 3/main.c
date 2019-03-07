#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,count,num;
    for(num=1;num<=5;num++)
    {
       printf("entre com o par,caso a<b:");
       scanf("%d,%d", &a, &b);

              for(count=a;count<=b;count++)
              {
                printf("\n%d",count);

              }

    }

    return 0;
}
