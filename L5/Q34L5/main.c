#include <stdio.h>
#include <stdlib.h>

int main()
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

}
