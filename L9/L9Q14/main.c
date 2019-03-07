#include <stdio.h>
#include <stdlib.h>

float dive(int num, int num2){
    return num/num2;
}
int soma(int num, int num2){
    return num+num2;}
int mult(int num, int num2){
    return num*num2;}
int menos(int num, int num2){
    return num-num2;
}

int main()
{
    char simbl[3];
    int num,num2;
    scanf("%d %d",&num,&num2);
    fflush(stdin);
    gets(simbl);
    if(strcmp(simbl,"/")==0)
        printf("%f",dive(num,num2));
    if(strcmp(simbl,"*")==0)
        printf("%d",mult(num,num2));
    if(strcmp(simbl,"+")==0)
        printf("%d",soma(num,num2));
    if(strcmp(simbl,"-")==0)
        printf("%d",menos(num,num2));
}
