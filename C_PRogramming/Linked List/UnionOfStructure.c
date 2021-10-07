#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct a
    {
        int i;
        char c[2];
    };
    struct b
    {
        int j;
        char d[2];
    };
    union z
    {
        struct a key;
        struct b data;
    };
    return 0;
    
    
}