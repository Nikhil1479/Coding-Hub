// program to convert farenheit to celcius

#include <stdio.h>
int main()
{
    float temp, celcius;
    printf("Enter the value of temperature in Farenheit\n");
    scanf("%f", &temp);
    celcius = (temp - 32) * 5 / 9;
    printf("%0.2fF in Celcius is %0.2fC", temp, celcius);
    return 0;
}