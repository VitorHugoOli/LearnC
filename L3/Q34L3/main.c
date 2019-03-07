#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  cont,f,m,s,n,fs,mn,sex,opiniao;
    f=0;
    m=0;
    s=0;
    n=0;
    fs=0;
    mn=0;
    for(cont=1;cont<=5;cont++)
    {
        printf("digite 1 para masc 2 para fem:");
        scanf("%d",&sex);
        if(sex==1)
            m++;
        if(sex==2)
            f++;
        printf("digite sua opiniao sobre o produto 1 para sim 2 para nao:");
        scanf("%d", &opiniao);
        if(opiniao==1)
            s++;
        if(opiniao==2)
            n++;
        if((opiniao==1) && (sex==2))
          fs++;
        if((opiniao==2) && (sex==1))
          mn++;

    }
    printf("o numero de pessoas q responderam sim %d\n",s);
    printf("o numero de pessoas q responderam nao %d\n",n);
    printf("a porcentagem de mulheres q falaram sim foi:%d\n", (fs*100)/f);
    printf("a porcentagem de homens q falara nao foi:%d\n", (mn*100)/m);

    return 0;
}
