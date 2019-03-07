#include <stdio.h>
#include <stdlib.h>

int main()
{   int cont,num,p,i;
       i=0;
       p=0;
    for(cont=0;cont<7;cont++){
        printf("um numero qualquer:");
        scanf("%d", &num);
         if(num%2==0) p++;
         else i++;
    }

     printf("o numero  par:%d\n", p);
     printf("o numero e impar:%d",i);
    return 0;
}
