#include <stdio.h>
#include <stdlib.h>

int main()
{
    int massa,I;
    printf("digite a massa em gramas: ");
    scanf("%d",&massa);
    I=30;
    while(massa>0.1)
    {
        massa=massa-massa*0.25;
        I=I+30;
    }
    printf("o tempo foi: %d segundos",I);
    return 0;
}
