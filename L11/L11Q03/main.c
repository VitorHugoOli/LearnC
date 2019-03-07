#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *numeros, *pares;
    int nume;
    pares=fopen("pares.txt","w");
    numeros=fopen("numeros.txt","r");
    while(fscanf(numeros,"%d",&nume)!=EOF)
    {

        if(nume%2==0)
        fprintf(pares,"%d\n",nume);
    }

    return 0;
}
