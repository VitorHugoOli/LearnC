#include <stdio.h>
#include <stdlib.h>

int main () //q15
{
    int m[2][2], i, j, SL[2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<2; i++){
            SL[i]= 0;
        for(j=0; j<2; j++){
            SL[i]=SL[i] + m[i][j];
        }
    }
    for(i=0; i<2; i++)
       printf("%d ", SL[i]);
    return 0;

}
