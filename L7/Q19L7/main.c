#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("hello word\n");
    float M[5][10],maior;
    for(int i=0;i<5;i++) {
        for(int j=0;j<10;j++)
            scanf("%f",&M[i][j]);
    }
        for(int i=0;i<5;i++) {
            maior=0;
            for(j=0;j<10;j++){
                if(M[i][j]>maior)
                maior=M[i][j];
            }
            printf("%f\n",maior);
        }

    return 0;
}
