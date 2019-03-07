#include <stdio.h>
#include <stdlib.h>

int main()
{
    int placa,dezena;
    printf("digite a placa do veiculo:");
    scanf("%d",&placa);
    dezena=(placa%1000)%100;
    printf("o valor da dezena e:%d",dezena/10);



}
