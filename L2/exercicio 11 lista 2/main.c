#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
   while (num != -999)
    {
        printf("digite um nuemro para ver seu cubo:");
        scanf("%d", &num);
        printf("o numero ao cubo e:%d \n", num*num*num);
    }
    return 0;
}
