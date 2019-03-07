#include <stdio.h>
#include <stdlib.h>

int main () //q17
{
int m[5][3], i, j, SL[5];
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<5; i++){
            SL[i]= 0;
        for(j=0; j<3; j++){
                if(j==0)
            SL[i]=SL[i] + m[i][j]*10;
                if(j==1)
            SL[i]=SL[i] + m[i][j]*15;
                if(j==2)
            SL[i]=SL[i] + m[i][j]*30;
        }
    }
    for(i=0; i<5; i++)
       printf("%d ", SL[i]/2);
return 0;
}
