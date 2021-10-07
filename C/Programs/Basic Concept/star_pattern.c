#include <stdio.h>
// #include <stdlib.h>

int main(){
    int i, j , k=1,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("*");
            k = k+1;
        }
        printf("\n");
    }
return 0;
}