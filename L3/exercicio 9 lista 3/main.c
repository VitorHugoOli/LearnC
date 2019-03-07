#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N,cont,rept,M;
    printf("quantos numeros serao digitados:");
    scanf("%f",&rept);
      M=N;
    for(cont=1;cont<=rept;cont++)
    {
        printf("digite um nuemero para saber qual e o seu maior:");
        scanf("%f",&N);
        if(N>M)
           M=N;
    }
     printf ("o maior numero e:\n%f", M);

     return 0;
}
