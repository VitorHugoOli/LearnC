#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main()
{
    int vp[tam],vi[tam]num,sp,si,maiorP,menorI,p,i,mp,mi;
    p=0;
    i=0;
    for(cont=0; cont<tam; cont++)
    {
        scanf("%d",&num);
        if(cont==0)
        {
            maiorP=num;
            menorP=num;
        }
        if(num%2==0)
        {
            vp[p]=num;
            p++;
            sp=sp+num;
            if(num>maiorP)
                maiorP=num;
            else
            {
                vi[i]=num
                      i++;
                si=si+num;
                if(num<menor)
                    menorI=num;
            }
        }
        printf("")
        mp=sp/p;
        mi=si/i;
        printf("medias pares: %d impares: %d, ja os mairo numero par: %d e o menor: %d",mp,mi,maiorP,menorI)
        for(cont=0; cont=p; cont++)
            if(vp[p]>mp)
                printf("pares maiores q a media: %d");
        for(cont=0; cont=i; cont++)
            if(vi[i]>mi)
                printf("pares menores q a media: %d");

        return 0;
    }
