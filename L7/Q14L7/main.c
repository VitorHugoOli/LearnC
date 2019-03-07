#include <stdio.h>
#include <stdlib.h>

int main () //q14
{
    int m[2][2], i, j, s=0;
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d", &m[i][j]);
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            s+=m[i][j];
    printf("%d", s);
    return 0;
}
