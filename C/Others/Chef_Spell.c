#include <stdio.h>
int spell(int num1, int num2, int num3);

int main()
{
    int a, b, c, i , n, result;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        result = spell(a, b, c);
        printf("%d",result);
    
    }
    return 0;
}

int spell(int num1, int num2, int num3)
{
    int largest, smallest, middle;

    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
    if (num1 < num3 && num1 < num2)
    {
        smallest = num1;
    }
    else if (num2 < num1 && num2 < num3)
    {
        smallest = num2;
    }
    else
    {
        smallest = num3;
    }
    if (num1 < largest && num1 > smallest)
    {
        middle = num1;
    }
    else if (num2 < largest && num2 > smallest)
    {
        middle = num2;
    }
    else
    {
        middle = num3;
    }
    return largest + middle;
}