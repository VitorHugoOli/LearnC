#include <stdio.h>
#include <stdlib.h>
//QUESTAO 5//
int main()
{
    int num,m1,m2,cont,m3;
    for(cont=1;cont<=4;cont++)
    {
        printf("digite o num:");
        scanf("%d",&num);
        if(cont==1)
        {
            m1=num;
            m2=num;
            m3=num;
        }
          if(m3<m1 && m2 >m3)
        {
            if(num>m3)
            {
                m3=num;
                printf("%d\n",m3);
            }
        }
        if(num<m2)
        {
        m2=num;
        }
        if(num>m1)
        {
        m1=num;
        }

    }
    printf("os maiorees numeros sao %d,%d\n",m1,m3);
    return 0;
}
