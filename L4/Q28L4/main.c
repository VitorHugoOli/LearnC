#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("o valor de x: ");
    scanf("%f",&x);
    if(x<=1)
        printf("1");
    if(x>1&&x<=2)
        printf("2");
    if(x>2&&x<=3)
        printf("%f",x*x);
    if(x>3)
        printf("%f",x*x*x);
    return 0;
}
