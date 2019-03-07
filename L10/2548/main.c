#include <stdio.h>
#include <stdlib.h>

int main()
{
    int obras,fail,i,j,S;

    while((scanf("%d %d",&obras,&fail))!=EOF)
    {
        S=0;
        int precos[obras],maior[fail];
        for(i=0; i<obras; i++)
            scanf("%d",&precos[i]);
        for(i=0; i<fail; i++)
        {
            for(j=0; j<obras; j++)
            {
                if(j==0)
                    maior[i]=precos[j];
                if(maior[i]<precos[j])
                {
                    maior[i]=precos[j];
                }
            }
            obras--;
        }
        for(i=0; i<fail; i++)
            S+=maior[i];
         printf("%d\n",S);
    }
    return 0;
}
