#include <stdio.h>
#include <math.h>

int main()
{ //Q20
  int t,cont,x=0;
  float media;
  cont=0;
	scanf("%d",&t);
   while(t>0)
	{
	x=x+t;
	cont++;
	scanf("%d",&t);
	}

	printf("%d",x/cont);
}
