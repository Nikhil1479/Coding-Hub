#include<stdio.h>
#include<stdlib.h>
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
      int x,y;
      printf("Enter the upper and lower bound\n");
      scanf("%d %d",&x,&y);
      int c=0;
      for(i=x-1;i<y;i++)
      {
        c++;
      }
      printf("\nThe number of array elements in range are : %d\n",c);
      printf("\nThe array elements in range is :\n");
      for(i=x-1;i<y;i++)
      {
        printf("\n%d",*(a+i));
      }
      return 0;
}