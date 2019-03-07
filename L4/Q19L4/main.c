#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C;
    printf("valor de A:");
    scanf("%f",&A);
    printf("valor de B:");
    scanf("%f",&B);
    printf("valor de C:");
    scanf("%f",&C);
    if (A<=B&&B<=C)
        printf("a ordem e %f<%f<%f",A,B,C);
    if (B<A&&A<C)
        printf("a ordem e %f<%f<%f",B,A,C);
    if(C<B&&B<A)
        printf("a ordem e %f<%f<%f",C,B,A);
    return 0;
}
