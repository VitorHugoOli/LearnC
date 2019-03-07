#include <stdio.h>
#include <stdlib.h>


int main()
{
    float juca,chico;
    int I;
    chico=1.50;
    juca=1.10;
    I=0;
    while(chico >= juca)
    {
        juca=juca+0.03;
        chico=chico+0.02;
        I++;
    }
    printf("tempo: %d",I);
}

