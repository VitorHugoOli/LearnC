#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double delta(int,int,int);
double raiz1(int,int,int);
double raiz2(int,int,int);

void main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("X1=%lf X2=%lf\n",raiz1(num1,num2,num3),raiz2(num1,num2,num3));
    system("PAUSE");
}
double delta(int a,int b, int c){
  return (b*b)-(4*a*c);
}
double raiz1(int a,int b,int c){

   return ((-b)+pow(delta(a,b,c),0.5))/(2*a);
}
double raiz2(int a,int b,int c){
   return ((-b)-pow(delta(a,b,c),0.5))/(2*a);
}
