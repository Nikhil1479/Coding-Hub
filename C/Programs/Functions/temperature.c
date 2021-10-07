#include <stdio.h>
#include <stdlib.h>

float convert(float celcius);

int main(){
    float temp;
    printf("Enter temperature\n");
    scanf("%f",&temp);
    // result = convert(celcius);
    printf("%.2f converted to Farenheit is %.2f",temp, convert(temp));
return 0;
}

float convert(float celcius){
    float result;
    result = ((celcius * 9/5) + 32);
    return result;
}