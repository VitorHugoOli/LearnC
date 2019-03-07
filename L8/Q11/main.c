#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct beleza{
    int inscricao;
    char nome[30],naturalidade[30],estado[30];
    float altura,peso;
    }x[30];
    struct apicultor{
    int codigo;
    char regiao[30],es[30],qualifi[30];
    int abelhas;
    }y[100];
    struct comerciante{
    int codigo,quantest,quantmin;
    char descricao[121];
    float preco;
    }z[50];
    struct locadora{
    int codigo;
    char titulo[30],genero[30],categoria[30];
    float preco;
    }k[500];
    return 0;
}
