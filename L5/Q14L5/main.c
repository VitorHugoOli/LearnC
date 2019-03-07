#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,t,cont,x;
    scanf("%d",&x);
    scanf("%d",&num2);
    scanf("%d",&t);
    for(cont=1;cont<=t;cont++)
    {
        if(cont%2==0)
        {
          num1=x;
          num1=num1+num2;
          printf("%d\n",num1);
        }
        else
        {
          num1=x;
          num2=num1-num2;
          x=num1+num2;
          printf("%d\n",num2);
        }
    }

    return 0;
}
