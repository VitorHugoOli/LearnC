#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {

    float S,F,R;
    int num_c,num_b,div,div_b;

       for (num_c=480;num_c<405;num_c=num_c-10)
       {
           num_c;
           printf("o numero:%d",num_c);
            for (div=10;div<25;div=div+1)
             {
              R=num_c/div;
             }
       }

       for (num_b=475;num_b<400;num_b=num_b-10)
      {

            for (div_b=11;div_b<26;div_b=div_b+1)
            {
            F=-num_b/div_b;

            }

      }

       S=R+F;
       printf("o resultado foi:%f",S);
       return 0;

}
