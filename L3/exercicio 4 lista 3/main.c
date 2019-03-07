#include <stdio.h>
#include <stdlib.h>

int main()
{   float A,M,D,R;
    printf("digite quantos anos vc possui:");
    scanf("%f", &A);
    printf("digite quantos meses vc possui:");
    scanf("%f", &M);
    printf("digite quantos dias vc possui:");
    scanf("%f", &D);
    R=(A*365)+(M*30)+D;
    printf("vc possui:%f dias",R);


    return 0;
}
