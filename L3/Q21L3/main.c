#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cont,soma3;
    char nome[21];
    float nota1,nota2,nota3,nota4,nota5;
    printf("quantos alunos existem nesta turma:");
    scanf("%d",&n);
    soma3=0;
    for(cont=0;cont<=n;cont++)
    {
       printf("digite o nome do aluno");
       scanf("%s", nome);
         printf("o valor da primeira prova ");
         scanf("%f", &nota1);
         printf("o valor da segunda prova ");
         scanf("%f", &nota2);
         printf("o valor da terceira prova ");
         scanf("%f", &nota3);
         printf("o valor da quarta prova ");
         scanf("%f", &nota4);
         printf("o valor da quinta prova ");
         scanf("%f", &nota5);
       printf("o aluno %s , foi aprovado em\n",nome);
           if(nota1>7)
            {
             printf("aprovado 1\n");
            }
           if(nota2>7)
            {
             printf("aprovado 2\n");
            }
           if(nota3>7)
            {
             soma3++;
             printf("aprovado 3\n");
            }
           if(nota4>7)
            {
             printf("aprovado 4\n");
            }
           if(nota5>7)
            {
             printf("aprovado 5\n");
            }

    }


    return 0;
}
