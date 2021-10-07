#include <stdio.h>
#include <stdlib.h>

int fact(int x);     // function protoype

int main(){
    int a ;
    printf("Enter the Number\n");
    scanf("%d",&a);
    printf("Value of Factorial %d is %d",a,fact(a)); //function call
return 0;
}

int fact(int x){
        // printf("%d\n",x);

    int result;
    if(x==1 || x==0){
        return 1;
    }
    else{
        result= x *fact(x-1);// recursion is happening of function (fact)
    } 
    return result;
    
}