#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas,age,opa,opb,opc,opd,ope,num=0;
    char opiniao;
    opa=0;
    opb=0;
    opc=0;
    opd=0;
    ope=0;
    while(num<=2)
    {
        printf("sua idade: ");
        scanf("%d",&age);
        printf("sua opiniao:");
        fflush(stdin);
        scanf("%c",&opiniao);
        switch(opiniao)
        {
        case 'a':
            opa++;
            break;
        case 'b':
            opb++;
            break;
        case 'c':
            opc++;
            break;
        case 'd':
            opd++;
            break;
        case 'e':
            ope++;
            break;
        }
        num++;
    }
    printf("respostas otimos:%d ",opa);
    return 0;
}
