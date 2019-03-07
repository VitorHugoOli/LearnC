#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,S;
    printf("o valor da sua primeira nota:");
    scanf("%f", &x);
    printf("o valor da sua segunda nota:");
    scanf("%f", &y);
    printf("o valor da sua terceira nota:");
    scanf("%f", &z);
    S=(2*x+3*y+5*z)/10;
    printf("sua media foi:%f",S);

    return 0;
}
