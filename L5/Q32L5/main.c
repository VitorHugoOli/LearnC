#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,md, a, i, p, fp, ma, mi;
    char nome[32];
    mi=0;
    fp=0;
    ma=0;
    md=0;
    while (nome[0]!='@'){
        printf("para sexo masc digite 1, do contrario 2:\n");
        fflush(stdin);
        scanf("%s", &nome);
        scanf("%d", &s);
        scanf("%d", &a);
        scanf("%d", &i);
        scanf("%d", &p);
        if(s==1 && a>ma){
            ma=a;
        }

        if(s==2 && p>fp){
            fp=p;
        }
        mi++;
        md=md+i;
    }
    printf("masc mais alto, fem mais pesada, media das idades: %d, %d, %d\n", ma, fp, md/mi);
    return 0;
}
