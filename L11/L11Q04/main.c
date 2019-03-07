#include <stdio.h>
#include <stdlib.h>
int main()
{
    char sex,resto[50];

    FILE *dados,*modelosmasc,*modelosfem;
    dados=fopen("dados.txt","r");
    modelosmasc=fopen("modelosmasc.bin","wb");
    modelosfem=fopen("modelosfem.bin","wb");
    while(fscanf(dados,"%c",&sex)!=EOF)
    {
        if(sex=='M')
        {
            fgets(resto,50,dados);
            fprintf(modelosmasc,"M %s",resto);
        }
        if(sex=='F')
        {
            fgets(resto,50,dados);
            fprintf(modelosfem,"F %s",resto);
        }
    }
    fclose(dados);
    fclose(modelosfem);
    fclose(modelosmasc);
    return 0;
}

