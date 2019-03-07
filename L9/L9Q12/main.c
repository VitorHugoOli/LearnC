#include <stdio.h>
#include <stdlib.h>
float transseg(float h,float m,float s){
    return (h*3600)+ (m*60) + s;
}
int main()
{
    float hora, min, seg;
    scanf("%f %f %f", &hora, &min, &seg);
    printf("%f", transseg(hora, min, seg));

    return 0;
}
