#include <stdio.h>
#include <stdlib.h>

int main() //questao 35//
{

float rf, rp, ali, outras, pg, x, alioutras, rprf;
pg=0;
x=0;
scanf("%f", &rp);
while( rp != 0 )
{
    scanf("%f", &rf);
    scanf("%f", &ali);
    scanf("%f", &outras);
    if(outras>=200)
    {
        pg++;
    }
    if(rp>rf)
    {
        x++;
    }
     alioutras=ali + outras;
     rprf=rp + rf;
     scanf("%f", &rp);
}
printf("%0.f, %0.f, %0.f\n\n", pg, x, (alioutras*100)/rprf);
return 0;
}
