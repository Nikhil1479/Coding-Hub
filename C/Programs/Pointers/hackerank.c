#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    *a = *a + *b;
    *b = *
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d", a);
    printf("%d", b) return 0;
}