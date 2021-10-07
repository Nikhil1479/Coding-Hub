#include <stdio.h>
int main()
{
    char i = 0, src[100], dst[100];
    printf("Enter Source String:");
    scanf("%s", src);
    while (src[i] != '\0')
        dst[i] = src[i++];
    dst[i] = '\0';
    printf("\nDestination String:%s", dst);
    return 0;
}