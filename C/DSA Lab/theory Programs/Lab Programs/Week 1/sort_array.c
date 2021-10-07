#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,n, temp;

    printf("Enter the numbers of element: ");
    scanf("%d",&n);

    int *A=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
printf("Sorted Array: \n");
        for (i=0;i<n;i++)
        printf("%d",A[i]);
return 0;
}