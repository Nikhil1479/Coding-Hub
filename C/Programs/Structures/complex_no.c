#include <stdio.h>
#include <stdlib.h>

typedef struct complex
{
    int real;
    int imaginary;
} complex;

//Function
complex sumOfComplex(complex num1, complex num2)
{
    complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}
int main()
{
    int n1, n2, n3, n4;
    printf("Enter Real Part of 1st Complex Number:\n");
    scanf("%d", &n1);

    printf("Enter Imaginary Part of 1st Complex Number:\n");
    scanf("%d", &n2);

    printf("Enter Real Part of 2nd Complex Number:\n");
    scanf("%d", &n3);

    printf("Enter Imaginary Part of 2nd Complex Number:\n");
    scanf("%d", &n4);

    complex num1 = {n1, n2};
    complex num2 = {n3, n4};
    complex sum = sumOfComplex(num1, num2);

    printf("Sum  of %d+i(%d) and %d+i(%d) is %d+i(%d)", num1.real, num1.imaginary, num2.real, num2.imaginary, sum.real, sum.imaginary);

    return 0;
}