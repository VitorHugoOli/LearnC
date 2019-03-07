#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sp=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]%2==0)
            sp=sp+A[i];
    }
    printf("%d",sp);
    return 0;
}
