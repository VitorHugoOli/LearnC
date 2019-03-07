#include <stdio.h>
#include <stdlib.h>

int main() //q23
{
    int m[3][3], i, j,m2[3][3],n,x=1;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {   n=3;
        for(j=0; j<3; j++)
        {
            m2[i][j]=m[3-n][3-x];
            n--;
        }
        x++;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", m2[i][j]);
        printf("\n");
    }
    return 0;
}
