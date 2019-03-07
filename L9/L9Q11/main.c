#include <stdio.h>
#include <stdlib.h>
float areatri (float a,float b,float c)
{
    return (a+b+c)/2;
}
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("%.2f",areatri(a,b,c));
    return 0;
}
