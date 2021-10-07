#include <stdio.h>
#include <stdlib.h>

int average(int a, int b, int c);

int main(){
    int x , y, z;
    printf("Enter three Numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Average of Numbers is %d",average(x,y,z));
return 0;
}

int average(int a, int b, int c){
    int result;
    result = (a + b + c)/3;
    return result;

}