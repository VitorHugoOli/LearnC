#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont2,num,M;
      scanf("%d",&num);
      M=0;
      for(cont2=1; cont2<=num; cont2++)
        {
            if(num%cont2==0)
                M++;
            if(M>2)
                break;
        }
        if(M<=2)
            printf("primo");
    return 0;
}
