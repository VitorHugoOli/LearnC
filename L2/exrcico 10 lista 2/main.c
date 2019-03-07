#include <stdio.h>
#include <stdlib.h>
# include <math.h>

int main()
{

    float S;
    int num,N;
    S=0; num=1;
      for(N=1;N<=51;N++)
      {
          if(N%2==0)
          S=S-1/pow(num,3);
          else
          S=S+1/pow(num,3);
          num=num+2;
       }
    printf("o valor de pi e:%f",pow(S*32,0.3333333));

}
