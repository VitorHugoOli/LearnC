#include <stdio.h>
#include <string.h>

double converte(int vezes, int n){ //questão 12
    int i;
    for(i=0; i<vezes; i++){
        n*=60;
    }

    return n;

}

void main(){
    int horas, minutos, segundos;

    scanf("%d %d %d", &horas, &minutos, &segundos);

    horas = converte(2, horas);
    minutos = converte(1, minutos);

    printf("%d", horas+minutos+segundos);
}
