#include <stdio.h>
#include <stdlib.h>
int verif(int);

int main()
{
    int num;
    scanf("%d",&num);
    if(verif(num)==0)
        printf("possitivo");
    else
        printf("negativo");
    return 0;
}

int verif(int num){
    if(num>=0)
        return 0;
    else
        return 1;
}
