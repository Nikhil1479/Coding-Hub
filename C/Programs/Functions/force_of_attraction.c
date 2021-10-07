#include <stdio.h>
#include <stdlib.h>

float force(float mass);

int main(){
    float m;
    printf("Enter the Value of Mass\n");
    scanf("%f",&m);
    printf("\nValue of force is %.1fN",force(m));
return 0;
}

float force(float mass){
    return mass * 9.8;
}