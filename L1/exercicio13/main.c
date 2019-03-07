#include <stdio.h>
#include <stdlib.h>

int main()
{   float dividendo, divisor;
    printf("digite o valor do dividendo:\n");
    scanf("%f", &dividendo);
    printf("digite o valor do divisor:\n");
    scanf("%f",&divisor);
    if(divisor==0){
        printf("nao e possiveu dividir por 0");}
    else{
      printf("o valor do quociente e: %f\n",dividendo/divisor);}
    return 0;
}
