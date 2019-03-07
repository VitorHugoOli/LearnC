#include <stdio.h>
#include <stdlib.h>
int primo(int);

int main()
{
    int num1;
    scanf("%d",&num1);
    printf("%d",primo(num1));
    return 0;
}

int primo(int a){
   int i,cont=0;
   if(a==1)
    return 0;
   for(i=1;i<a;i++){
     if(a%i==0)
       cont++;
     if(cont>1)
        break;
   }
   if(cont==1)
     return 1;
   else
    return 0;
}
