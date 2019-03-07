#include <stdio.h>
#include <stdlib.h>

int main()

{
    float altura_m,altura_h, SAF, SAM,SCF, SCM, maior, menor;
    int ficha, codigo;
    SCF=0;
    SCM=0;
    altura_h=0;
    altura_m=0;
    SAF=0;
    SAM=0;

    for(ficha=1;ficha<=3; ficha++)
    {

        maior=altura_h;
        maior=altura_m;
        menor=altura_h;
        menor=altura_m;



        printf("digite seu codigo:");
        scanf("%d", &codigo);
        if(codigo==1)
        {
            printf("sua altura masc: ");
            scanf("%f", &altura_h);
            SCM++;
            SAM=SAM+altura_h;

        }
        else if(codigo==2)
        {
            printf("sua altura fem:");
            scanf("%f", &altura_m);
            SCF++;
            SAF=SAF+altura_m;
        }
        if(altura_h>maior) maior=altura_h;
        if(altura_m>maior) maior=altura_m;
        if(altura_h<menor) menor=altura_h;
        if(altura_m<menor) menor=altura_m;

    }
    printf("a media das alturas das mulheres:\n%f", SAF/SCF);
    printf("a media da altura turma:\n%f", (SAF+SAM)/(SCF+SCM));
    printf("a menor e a maior altura e: \n%d %d", menor, maior);



    return 0;
}
