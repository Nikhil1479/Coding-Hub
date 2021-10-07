#include <stdio.h>

int main(){
    int radius, area;
    float pi = 3.14;
    
    printf("Enter the radius of the Circle\n");
    scanf("%d",&radius);

    area = pi * radius * radius;

    printf("Area of Circle of radius %d is: %d",radius, area);

return 0;
}
