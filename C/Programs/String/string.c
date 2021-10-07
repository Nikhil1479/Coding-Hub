#include <stdio.h>
int main()
{
    char str[] = "Nikhil";
    char *ptr = str;
    while (*ptr != '\0') //\0 is used to tell the compiler that string block has end
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}