#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,cont;
   scanf("%d",&num);
   for(cont=1;cont<=num;cont++)
   {
         if(num%cont==0)
         {
        printf("o valor:%d\n ",cont);
         }
   }
}
