#include <stdio.h>
#include <stdlib.h>
/*
int mult (int num,int num2)
{
    if (num>num2)
        return num;
    else
    {
        if(num2%5==0)
        {
            printf("%d\n",num2);
            return mult(num,num2-5);
        }
        else
            return mult(num,num2-1);
    }
}

int main()
{
    int num,num2;
    scanf("%d %d",&num,&num2);
    mult(num,num2);
    return 0;
}
*/

/*
int tabuada(int N,int tam){
 if(tam==1){
    printf("%d",N);
    return ;
 }
  else
    printf("%d\n",tam*N);
    return tabuada(N,tam-1);
}
main(){
 int N;
 scanf("%d",&N);
 tabuada(N,N);
}
*/


/*
int impar (int num){
  if(num==1)
  return 1;
  else
  {
   printf("%d\n",(num*2)-1);
   return impar(num-1);
  }
}

main (){
 int N;
 scanf("%d",&N);
 printf("\n");
 printf("%d",impar(N/2));
}
*/

/*int MDC(int x,int y)
{
    int troca;
    if(x>=y)
    {
        if(x==y)
        {
            printf("%d\n",x);
            return x;
        }
        else
            return MDC(x-y,y);
    }
    else
    {
        troca=x;
        x=y;
        y=troca;
        return MDC(x,y);
    }
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    MDC(x,y);
}*/


double fatorial (double num)
{
    if(num<0)
        return -1;
    double fat;
    if (num == 1)
        return (1);
    else
        fat = num * fatorial (num-1);
    return fat;
}
int main()
{
    double numero;
    scanf("%lf", &numero);
    printf("%.0lf",fatorial(numero));

}

/*
int Fib(int n){
  if(n==1||n==2)
    return 1;
  else
    return Fib(n-1)+Fib(n-2);
}
main (){
 int N;
 scanf("%d",&N);
 printf("%d",Fib(N));
}
*/


