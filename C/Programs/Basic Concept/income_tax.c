#include <stdio.h>

int main()
{
    float tax = 0;
    float income;
    printf("Enter your Income\n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
        
    {
        tax += (0.05 * (income - 250000));
    }
    if (income >= 500000 && income <= 1000000)
        
    {
        tax += (0.20 * (income - 500000));
    }
    if (income >= 1000000)
        
    {
        tax += (0.30 * (income - 1000000));
    }

    printf("Tour income is %.2f and you have to pay %.2f as tax",income,tax);
    return 0;
}