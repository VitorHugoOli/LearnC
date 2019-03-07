#include <stdio.h>
#include <stdlib.h>

int main()
{
  int b,cont,a,S,d;
    S=0;
    printf("digite a: ");
    scanf("%d",&a);
    printf("digite b: ");
    scanf("%d",&b);
    S=a;
    d=a/b;
    for(cont=1; cont<=d;cont++)
    {
        S=S-b;
    }
    printf("%d\n",S);
    return 0;
}
