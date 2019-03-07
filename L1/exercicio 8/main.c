#include <stdio.h>


int main()
{   int N,grande,menor,num;
        menor=num;
        grande=num;

    for(N=1;N<8;N++)
        {
       printf("digite um numero:");
       scanf("%d",&num);

        if (grande<num){grande=num;}
        if (menor>num) {menor=num;}


        }

       printf("o menor numero e:%d\n",menor);
       printf("o maior numero e:%d\n\n",grande);
    return 0;
}
