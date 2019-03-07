#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num;
    printf("digite um num:");
    scanf("%f",&num);
    if (num>=0)
    {
      printf("a raiz do numero e:%f",sqrt(num));
    }
    else
    {
        printf("o quadrado do num e:%f",pow(num,2));
    }
    return 0;
}
