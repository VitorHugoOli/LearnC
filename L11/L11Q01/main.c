#include <stdio.h>
#include <stdlib.h>
#define tam 3
struct registro
{
    int matricula,notas[3];
    char nome[50];

} x[tam];

int main()
{
    int i,j;
    float media;
    FILE *school;
    school=fopen("alunos.txt","r");
    for(i=0; i<tam; i++)
    {
        fscanf(school,"%d",&x[i].matricula);
        fgets(x[i].nome,50,school);
        for(j=0; j<3; j++)
            fscanf(school,"%d",&x[i].notas[j]);
    }
    for(i=0; i<tam; i++){
        printf("%d\n",x[i].matricula);
        printf("%s",x[i].nome);
        media=0;
        for(j=0; j<3; j++)
            media+=x[i].notas[j];
        printf("%f\n",media/3);
        if(media>=8.5)
            printf("excelente\n");
        else if(media<8.5&&media>=7)
            printf("bom\n");
        else
            printf("preocupante\n");
        printf("\n");
    }
    return 0;
}
