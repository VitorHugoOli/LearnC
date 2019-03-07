#include <stdio.h>
#include <stdlib.h>
int menor(int*,int);
int main()
{   int i, v[3];
    for(i=0;i<3;i++){
        scanf("%d", &v[i]);
    }
    printf("%d",menor(v,i));

    return 0;
}
int menor(int* v,int i){
    int  menor;
    for(i=0; i<3; i++){
        if(i==0)
            menor=v[i];
        if(v[i]<menor)
            menor=v[i];
    }
 return menor;
}
