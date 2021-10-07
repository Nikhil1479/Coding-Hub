#include <stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;

    printf("Value of ptr is %u\n", ptr);
    ptr++; // or ptr = ptr +1;
    printf("Value of ptr after Incrementation is %u\n", ptr);
    return 0;
}