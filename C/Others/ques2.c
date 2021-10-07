#include <stdio.h>
int main()
{
	int tree[8];
	int i;
	
	printf("Enter the elements of the array: ");
	for(i=0;i<8;i++)
	{
		scanf("%d",&tree[i]);
	}
	
	printf("The original array is: ");
	for(i=0;i<8;i++)
	{
		printf("%d",tree[i]);
	}
	
	printf("\nThe reversed array is : ");
	for(i=7;i>=0;i--)
	{
		printf("%d",tree[i]);
	}
	
	return 0;
}
