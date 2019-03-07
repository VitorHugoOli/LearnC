#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,t,cont;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&t);
    for(cont=0;cont<=t;cont++)
    {
        num1=num1+num2;
        num2=num2+num1;
        printf("%d\n",num1);
        printf("%d\n",num2);
    }

     return 0;
}
