#include<stdio.h>
#include<stdlib.h>
void printNGE(int arr[], int n)
{
    int next, i, j;
    for (i=0; i<n; i++)
    {
        next = -1;
        for (j = i+1; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d -- %d\n", arr[i], next);
    }
}
 
int main()
{
    int *a,n,i,j,t;
      printf("How many numbers you want to be sorted: ");
      scanf("%d",&n);
      a=(int *)malloc(n *sizeof(int));
      printf("\nEnter %d Numbers: \n",n);
      for(i=0;i<=n-1;i++)
      {
            scanf("%d", (a+i));
      }
      printf("The next greatest element are :\n");
    printNGE(a, n);
    return 0;
}