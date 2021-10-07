#include <stdio.h>

int main(){
    int length, breadth, area;
    printf("Enter the length of the Rectangle\n");
    scanf("%d",&length);
    printf("Enter the breadth of the Rectangle\n");
    scanf("%d",&breadth);
    area = length * breadth;

    printf("Area of the Rectangle is %d", area);
return 0;
}