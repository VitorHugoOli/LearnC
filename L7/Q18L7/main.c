#include <stdio.h>
#include <stdlib.h>

int main () //q18
 {
     int m[10][4], i, j, SL[4];
    for(i=0; i<10; i++){
        for(j=0; j<4; j++){
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
