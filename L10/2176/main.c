#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0,i,quant;
    char num[102];
    scanf("%s", num);
    quant=strlen(num);
    for(i=0;i<quant;i++)
        if(num[i]-48==1)
            cont++;

    if(cont%2==0)
        num[quant]='0';
    else
        num[quant]='1';
    num[quant+1]='\0';
    printf("%s\n",num);
    return 0;
}
