#include <stdio.h>

int main(){
    int prime = 1,n, i=2;
    printf("Enter a Number\n");
    scanf("%d",&n);

    while (i<n)
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
    }i++;
    if(prime == 0){
        printf("It is not a prime number");
    }
    else{
        printf("It is a prime number");
    }
     
return 0;
}