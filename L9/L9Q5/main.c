#include <stdio.h>
#include <stdlib.h>
int F_C(int);
int F_K(int);
int C_F(int);
int C_K(int);
int K_C(int);

void main()
{
    char convert[5];
    int temp1,temp2;
    scanf("%d",&temp1);
    fflush(stdin);
    gets(convert);
    if(strcmp(convert,"F_C")==0)
        printf("%d°C",F_C(temp1));
    if(strcmp(convert,"F_K")==0)
        printf("%d°K",F_K(temp1));
    if(strcmp(convert,"C_F")==0)
        printf("%d°F",C_F(temp1));
    if(strcmp(convert,"C_K")==0)
        printf("%d°K",C_K(temp1));
    if(strcmp(convert,"K_C")==0)
        printf("%d°C",K_C(temp1));
}

int F_C(int a){
    return (a-32)/1.8;
}
int F_K(int a){
    return (a+459,67)*(5/9);
}
int C_F(int a){
    return (a*1.8)+32;
}
int C_K(int a){
    return a+273;
}
int K_C(int a){
    return a-273;
}
