#include <stdio.h>
#include <stdlib.h>

int main()
{
    float al, ab;

 printf("digite o valor da aresta lateral:\n");
 scanf("%f", &al);
 printf("digite o valor da aresta da base:\n");
 scanf("%f",&ab);
 printf("o valor do perimetro do quadrado e:\n %f",(2*al) + 2*ab);
 printf("o valor da area e:%f",al*ab);
 return 0;
}
