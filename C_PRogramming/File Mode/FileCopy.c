#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int noc = 0, nob = 0, not = 0, non = 0;
    fp = fopen("Read.c", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        noc++;
        if (ch == ' ')
            nob++;
        if (ch == '\t')
            not ++;
        if (ch == '\n')
            non++;
    }
    fclose(fp);
    return 0;
}