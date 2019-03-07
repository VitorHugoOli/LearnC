#include <stdio.h>
#include <stdlib.h>
char* valid(char* cpf)
{
    int S1=0,S2=0,m1=10,m2=11,contvalid,i;
    for(i=0; i<11;i++)
    {
        S1+=m1*(cpf[i]-48);
        m1--;
        if(i==2||i==6)
            i++;
    }
    contvalid=S1%11;
    if(contvalid<2 && (cpf[12]-48) || 11-contvalid==(cpf[12]-48))
    {
        for(i=0; i<13; i++)
        {
            S2=m2*(cpf[i]-48);
            if(i==2||i==6||i==10)
                i++;
        }
    }
    else
        return 1;
    contvalid=S2%11;
    printf("%d",contvalid);
    if(contvalid<2 && (cpf[13]-48) || 11-contvalid==(cpf[13]-48))
        return 0;
}

void main()
{
    char cpf[15];
    gets(cpf);
    if(valid(cpf)==0)
        printf("valido");
    else
        printf("falso");
}
