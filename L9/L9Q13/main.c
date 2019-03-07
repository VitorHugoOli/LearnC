#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float funcao(int x,int x2,int y,int y2,int z,int z2){
 return pow(pow(x2-x,2)+pow(y2-y,2)+pow(z2-z,2),0.5);
}
int main()
{
    int x,x2,y,y2,z,z2;
    scanf("%d %d %d %d %d %d",&x,&x2,&y,&y2,&z,&z2);
    printf("%f",funcao(x,x2,y,y2,z,z2));
    return 0;
}
