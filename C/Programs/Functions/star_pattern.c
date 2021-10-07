#include <stdio.h>
#include <stdlib.h>

void print_pattern(int n);

int main(){
    int n;
    printf("Enter a Number to print pattern\n");
    scanf("%d",&n);
    n=4;
    print_pattern(n);
return 0;
}

void print_pattern(int n){
    int i;
    if(n==1){
        printf("*\n");
        return;
    }
    print_pattern(n-1);
    for(i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}

