#include <stdio.h>
#include <stdlib.h>
#define tam 4

/*
int main()//Q3-4
{
    struct notas
    {

        char nome[30],turma[10];
        float nota1,nota2,nota3,nota4;
    }x;

    fflush(stdin);
    gets(x.nome);
    gets(x.turma);
    scanf("%f",&x.nota1);
    scanf("%f",&x.nota2);
    scanf("%f",&x.nota3);
    scanf("%f",&x.nota4);

    printf("%s %s\n",x.nome,x.turma);
    printf("%.1f\n",x.nota1);
    printf("%.1f\n",x.nota2);
    printf("%.1f\n",x.nota3);
    printf("%.1f\n",x.nota4);
}
*/
/*
 struct voo //Q5-6
    {
        char nvoo[50],tipo[50];
        float preco;
        int lugares;
    }x[10];
int main()
{
    int i;
    for(i=0;i<10;i++){
    fflush(stdin);
    gets(x[i].nvoo);
    fflush(stdin);
    scanf("%s",&x[i].tipo);
    scanf("%f",&x[i].preco);
    scanf("%d",&x[i].lugares);
    printf("\n");
    }
    printf("\n");
    for(i=0;i<10;i++){
            printf("VOOS");
    printf("%s\n",x[i].nvoo);
    printf("%s\n",x[i].tipo);
    printf("%f\n",x[i].preco);
    printf("%d\n",x[i].lugares);
    printf("\n");
    }
    return 0;
}
*/
 /*struct Dado //Q7
    {
        char nome[21],city[10],estado[5],aniv[10];
        float preco;
        int tefelone;
    }x;
  struct Filme em cartaz
    {
        char titulo[21];
        int duracao,secao[5];
    }y;
   struct medico de plantao
    {
        char nome[21];
        int xaicula,horaI,horaF,Especialidae;
    }z[3];

*/


struct endereco{ //Q8-9
   char rua[30], bairro[10], cid[20], es[10];
   int cep;

}y;
struct cadastro{
    char nome[30], sexo[2], estadoc[10];
    int idade, tel;
    struct endereco y;
    float cpf, id, sala;

}x[50];
int main (){
   int i;
   for(i=0; i<50,i++)
    {
   fflush(stdin);
   gets(x.nome);
   scanf("%s", &x.sexo);
   scanf("%s", &x.estadoc);
   fflush(stdin);
   gets(x.y.rua);
   fflush(stdin);
   gets(x.y.bairro);
   scanf("%s",x[i].y.cid);
   scanf("%s",x[i].y.es);
   scanf("%d", &x[i].y.cep);
   scanf("%d", &x[i].idade);
   scanf("%d", &x[i].tel);
   scanf("%f", &x[i].cpf);
   scanf("%f", &x[i].id);
   scanf("%f", &x[i].sala);
   }
   printf("\n");
   for(i=0; i<50,i++)
    if(x.sala<500 && strcmp(x.estadoc,"CASADO(A)")==0 && strcmp()
    {
   printf("CADASTRO:\n");
   printf("%s  | endereco |  %f\n", x.nome, x.sala );
   printf("%.0f  |  %.0f  |  %s\n", x.id, x.cpf, x.estadoc);
   printf("%d  |  %d  |  %s\n", x.tel, x.idade, x.sexo);
   printf("O ENDERECO E COMPOSTO DE:\n ");
   printf("%s  |  %s  |  %s\n", x.y.rua, x.y.bairro, x.y.cid);
   printf("%s  |  %d\n", x.y.es, x.y.cep);
   return 0;
    }
}
