#include <stdio.h>
#include <stdlib.h>

int main() //questao 33
{
    int cont2,M,X, cont, s, z;
    X=0;
     scanf("%d", &z);
     scanf("%d", &s);
      while(z>0)
      {
      for(cont=z; cont<=s; cont++)
      {
        M=0;
        for(cont2=1; cont2<=cont; cont2++)
        {

            if(cont%cont2==0)
            {
                M++;
            }
        }
        if(M==2)
            {
                X++;
            }
      }
      printf("%d\n", X);
       scanf("%d", &z);
       scanf("%d", &s);
      }
    return 0;
}
/*int main()//questao 34
{
    int num, cont;
    float raiz;
    for(cont=1; cont<=10; cont++)
    {
        scanf("%d", &num);
        if(num<=0)
            printf("nao e possivel\n");
        else
        {
            raiz=pow(num,0.5);
            printf("%.0f\n",raiz);
        }
    }
    return 0;/
