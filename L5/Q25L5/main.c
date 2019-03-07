#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cityA,cityB,I;
    cityA=5000000;
    cityB=7000000;
    I=0;

    while(cityA<cityB)
    {
        cityA=cityA+(cityA*0.03);
        cityB=cityB+(cityB*0.02);
        I++;
    }
    printf("tempo: %d",I);
}
