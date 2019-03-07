#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,cont;
    printf("digite um num: ");
    scanf("%d",&num);
    for(cont=1;cont<=num;cont++)
    {
        if(cont%3==0&&cont%5==0)
        {
            printf("%d\n",cont);
        }
    }
}
