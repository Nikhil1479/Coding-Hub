#include <stdio.h>

int main(){
    int i=0, factorial=1,n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    factorial = factorial * i;
    }
    printf("Factorial of %d is %d",n, factorial);
return 0;
}