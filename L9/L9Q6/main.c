#include <stdio.h>
#include <stdlib.h>
int moedas(int);

void main()
{
    int troco;
    scanf("%d",&troco);
    printf("%d",moedas(troco));
}

int moedas(int din){
 int cinquenta,vinte,dez,cinco,dois,um;
 cinquenta=din/50;
 vinte=(din%50)/20;
 dez=((din%50)%20)/10;
 cinco=(((din%50)%20)%10)/5;
 dois=((((din%50)%20)%10)%5)/2;
 um=(((((din%50)%20)%10)%5)%2)/1;
printf("%d %d %d %d %d %d\n",cinquenta*100,vinte*100,dez*100,cinco*100,dois*100,um*100);
}
