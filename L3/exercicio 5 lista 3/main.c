#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float D,M,A;
     printf("quantos dias vc possui:");
     scanf("%f",&D);
     A=D/365;
     M=A/12;
     D=M/30;
     printf("vc possui:%f anos,%f meses,%f dias", A,M,D);

    return 0;
}
