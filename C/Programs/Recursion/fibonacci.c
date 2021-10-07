#include <stdio.h>
#include <stdlib.h>

int fib(int a);

int main(){
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    printf("%d",fib(x));
return 0;
}

int fib(int a){
    int result;
    if(a==1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        result = fib(a-1) + fib(a-2);
    }
return result;
}