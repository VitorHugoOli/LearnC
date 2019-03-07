#include <stdio.h>
#include <stdlib.h>
#define tam 5
///Questao 1
/*
struct school{
   char nome[30];
   int notas[4],matricula;

}x[tam];
int main()
{
   FILE *alunos;
   int i,j;
   float S;
   alunos=fopen("alunos.txt","r");
   for(i=0;i<tam;i++){
        fgets(x[i].nome,30,alunos);
        fscanf(alunos,"%d",&x[i].matricula);
        for(j=0;j<3;j++)
        fscanf(alunos,"%d\n",&x[i].notas[j]);
   }
   for(i=0;i<tam;i++){
    printf("%d\n",x[i].matricula);
    printf("%s",x[i].nome);
    for(j=0;j<3;j++)
    S=S+x[i].notas[j];
    printf("media %f",S/3);
   }

    return 0;
} */

///Questao 2
/*int main()
{
    FILE *votos;
    int i, menor, maior,voto,cand[6],M,N;
    votos=fopen("votos.txt","r");
    for(i=0;i<6;i++)
        cand[i]=0;
    while(fscanf(votos,"%d",&voto)!=EOF){
        if(voto==1)
            cand[1]++;
        if(voto==2)
            cand[2]++;
        if(voto==3)
            cand[3]++;
        if(voto==4)
            cand[4]++;
        if(voto==5)
            cand[5]++;
    }
    for(i=1;i<6;i++){
        if(i==1){
            maior=0;
            menor=1;
        }
        if(cand[i]>maior){
            maior=cand[i];
            M=i;
        }
        if(cand[i]<=menor){
            menor=cand[i];
            N=i;
        }
     }
     printf("cand:%d votos:%d\ncand:%d votos:%d",M,maior,N,menor);

}

*/


///Questao 3
/*
int main()
{
    int num;
    FILE *numeros, *pares;
    numeros=fopen("numeros.txt","r");
    pares=fopen("pares.txt","a");
    while(fscanf(numeros,"%d",&num)!=EOF){
        if(num%2==0)
        fprintf(pares,"%d\n",num);
    }
    fclose(numeros);
    fclose(pares);
}*/
///Questao 4
int main(){
    FILE *dados,*modelosMasc,*modelosFem;
    dados=fopen("dados.txt","r");
    modelosMasc=fopen("modelosMasc.bin","ab");
    modelosFem=fopen("modelosFem.bin","ab");
    char sexo, nome[30], colhos[20];
    float altura, peso;
    while(fscanf(dados,"%c", &sexo)!=EOF){
        fscanf(dados, "%s", nome);
        fscanf(dados, "%s", colhos);
        fscanf(dados, "%f", &altura);
        fscanf(dados, "%f\n", &peso);
        if(sexo=='M')
        fprintf(modelosMasc,"M %s %s %f %f\n",nome,colhos,altura,peso);
        if(sexo=='F')
        fprintf(modelosFem,"F %s %s %f %f\n",nome,colhos,altura,peso);
    }
    fclose(modelosMasc);
    fclose(modelosFem);
    return 0;



}

