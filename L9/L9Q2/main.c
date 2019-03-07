#include <stdio.h>
#include <stdlib.h>
int verif(int);

void main(){
    int num1;
    scanf("%d",&num1);
    printf("%d",verif(num1));
}

int verif(int a){
   if(a%2==0)
    return 0;
   else
    return 1;
}
