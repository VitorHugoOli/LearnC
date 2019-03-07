#include <stdio.h>
#include <stdlib.h>
/*
int media (int a,int b,int c,int z,int x)
{
    if((a+b+c+z+x)/5>=60)
        return 0;
    else
        return 1;
}
struct notas{
    char aluno[20];
    int nota1,nota2,nota3,nota4,nota5,pass;

}aux[2];
int main()
{
    int i;
    for(i=0;i<=2;i++){
        gets(aux[i].aluno);
        scanf("%d",&aux[i].nota1);
        scanf("%d",&aux[i].nota2);
        scanf("%d",&aux[i].nota3);
        scanf("%d",&aux[i].nota4);
        scanf("%d",&aux[i].nota5);
        aux[i].pass=media(aux[i].nota1,aux[i].nota2,aux[i].nota3,aux[i].nota4,aux[i].nota5);
    }
    for(i=0;i<=2;i++){
        printf("%s\n",aux[i].aluno);
        if(aux[i].pass==0)
         printf("passou :)");
        else
        printf("faill,otario kkkk");
    }
}
*/
int media (int a,int b,int c,int z,int x)
{
    if((a+b+c+z+x)/5>=60)
        return 0;
    else
        return 1;
}
void main()
{
    int nota1,nota2,nota3,nota4,nota5,i;
    for(i=0; i<10; i++){
        scanf("%d %d %d %d %d",&nota1,&nota2,&nota3,&nota4,&nota5);
    if(media(nota1, nota2,nota3,nota4,nota5)==0)
        printf("passou,miseravel");
    else
        printf("otario");
    }
}
