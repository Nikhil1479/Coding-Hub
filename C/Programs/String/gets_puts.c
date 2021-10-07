#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[50]; //char *s; (Alternative Way)
    printf("Enter Your Name: ");
    gets(s);
    printf("Your Name is ");
    puts(s);
    // printf("%s", s);

    return 0;
}