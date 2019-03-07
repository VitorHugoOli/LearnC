#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char nome[12],menornome[12];
    gets(nome);
    strcpy(menornome,nome);
    printf("%s",menornome);

    return 0;
}
