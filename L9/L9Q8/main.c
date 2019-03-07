#include <stdio.h>
#include <stdlib.h>
float media(int a,int b,int c){
 return (a+b+c)/3;
}
void main()
{
    int nota1,nota2,nota3;
    scanf("%d %d %d",&nota1,&nota2,&nota3);
    printf("%.1f",media(nota1,nota2,nota3));
}
