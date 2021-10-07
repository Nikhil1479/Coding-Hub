#include <stdio.h>
main()
{
    int n;
    n = f1(4);
    printf("%d",n);
}
f1(int x)
{
    int b;
    if(x==1)
    return 1;
    else
    b=x*f1(x-1);
    return b;
}