#include <stdio.h>
#include <stdlib.h>
int n;
void montaQuadrado(int i, int j){ //Questao 1
    if(i>0){
        printf("* ");
        if(j==1){
            printf("\n");
            montaQuadrado(i-1, n);
        } else {
            montaQuadrado(i, j-1);
        }
    }
}

int main(){

    scanf("%d", &n);

    montaQuadrado(n,n);



    return 0;
}



