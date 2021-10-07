#include <stdio.h>
int main()
{
    char *p[5];
    char a[] = "Yudhishthira", b[] = "Bhima", c[] = "Arjuna", d[] = "Nakula", e[] = "Sahadeva";
    int i, j;
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;
    for (i = 0; i < 5; i++)
        printf("%s\n", p[i]);
}