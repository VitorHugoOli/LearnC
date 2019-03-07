#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *result;
    result=fopen("result.txt","a");
    char tipo;
    int n1,n2,R;
    scanf("%d %c %d",&n1,&tipo,&n2);
    if(tipo=='+')
    fprintf(result,"%d + %d = %d\n",n1,n2,n1+n2);
    if(tipo=='-')
    fprintf(result,"%d - %d = %d\n",n1,n2,n1-n2);
    return 0;
}
