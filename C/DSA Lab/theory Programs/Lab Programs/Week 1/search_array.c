#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, j, element;
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("\nEnter elements of array : ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&p[j]);
    }
    printf("\nEnter element to be found : ");
    scanf("%d", &element);
    int flag=0;
    for(j=0;j<n;j++)
    {
        if(p[j] == element)
            flag = 1;
    }
    if(flag == 1)    
        printf("Element found\n");
    else
        printf(" Element is not found\n");
    
      return 0;
}