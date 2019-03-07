#include <stdio.h>
#include <math.h>

int main()
{ //Q17
  int cont,t;
  float x=0,N;
	scanf("%d",&t);
    N=t;
	for (cont=1;cont<=t;cont++)
       {
	  x=x+1/pow(N,N);
        N--;
        }
	printf("S:%f",x);
}
