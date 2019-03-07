#include <stdio.h>
#include <stdlib.h>

int main() // q11
{
    int m[2][2], m2[2][2], i, j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            m2[i][j]= 3* m[i][j];
        }
    }
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        printf("%d ", m2[i][j]);

    return 0;
