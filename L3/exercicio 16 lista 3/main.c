#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count,cont;
    for(count=1;count<=20;count++)
    {
        printf("\ndigite o valor:");
        scanf("%d", &n);
        for(cont=n;cont<=n*n;cont++)
        {
            printf("\na tabuada e:%d",cont);
        }
    }
    return 0;
}
