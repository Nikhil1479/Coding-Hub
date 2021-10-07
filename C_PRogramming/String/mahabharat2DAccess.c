#include <stdio.h>
int main()
{

    char a[] = "Yudhishthira", b[] = "Bhima", c[] = "Arjuna", d[] = "Nakula", e[] = "Sahadeva";
    char *p[5];
    int i, j, count = 0;
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; p[i][j]; j++)
            count += p[i][j] == 'a';
    }
    printf("\n%d", count);
}