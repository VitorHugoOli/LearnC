#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[4];
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%f",&num[i]);
    }
    for(i=0;i<4;i++)
    {
     printf("%f\n",num[i]);
    }

    printf("Hello world!\n");
    return 0;
}
