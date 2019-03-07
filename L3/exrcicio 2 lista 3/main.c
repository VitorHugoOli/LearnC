#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("digite o um numero para ver se e divisivel por 10,5 ou 2");
    scanf("%d",&num);
     if(num%10==0)
     {
        printf("o valor e divisivel por 10");
     }
     if(num%5==0)
     {
      printf("\no valor e divisivel por 5");
     }
    if(num%2==0)
    {
     printf("\no valor e divisivel por 2");
    }

        return 0;
}
