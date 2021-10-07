#include <stdio.h>
#include <string.h>
int main()
{
    char b[100], ch, i = 0, count = 0;
    printf("Input a String:");
    gets(b);
    printf("\nEnter any Character to Find it's Frequency:");
    scanf("%c", &ch);
    while (b[i])
        if (ch == b[++i])
            ++count;
    printf("Frequency of %c=%d", ch, count);
    return 0;
}