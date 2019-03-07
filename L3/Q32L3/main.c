#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int H,C,F,R,M;
    float T;
    printf("digite quantos hambúrgeres vc comprou");
    scanf("%d",&H);
    printf("digite quantos cheeseburger vc comprou");
    scanf("%d",&C);
    printf("digite quantos fritas vc comprou");
    scanf("%d",&F);
    printf("digite quantos refrigerantes vc comprou");
    scanf("%d",&R);
    printf("digite quantos milkshake vc comprou");
    scanf("%d",&M);
    T=(3*H)+(2.5*C)+(2.5*F)+(1*R)+(M*3);
    printf("o valor total a ser pago e: %f",T);
    return 0;

}
