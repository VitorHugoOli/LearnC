#include <stdio.h>
#include <stdlib.h>

int dim (int x,int y){
   if(x<y)
        return 0;
   else if(x==y)
        return 1;
   else
        return 1 + dim(x-y);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    dim(x,y);
    return 0;
}
