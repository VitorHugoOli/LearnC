#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int somaV(int* v){
    int i, s=0;
    for(i=0; i<5; i++){
        s=s+pow(v[i],2);
        printf("%d",s);
    }
    return s;
}
int main()
{
    int v[5], i;
    for(i=0; i<5; i++)
        scanf("%d", &v[i]);
    printf("%d", somaV(v));
    return 0;
}

