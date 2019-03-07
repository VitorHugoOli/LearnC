#include <stdio.h>
#include <stdlib.h>
/*
int invert (char[]);

void main()
{
    char num[4];
    gets(num);
    printf("%s",invert(num));
}

int invert(char num[]){
    char troca;
    troca=num[0];
    num[0]=num[2];
    num[2]=troca;
    return num;
}*/

char invert (char* num){
//void;
   char troca;
    troca=num[0];
    num[0]=num[2];
    num[2]=troca;
    return num;
}
void main()
{
    char num[4];
    gets(num);
    printf("%s",invert(num));

}

