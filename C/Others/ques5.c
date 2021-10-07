#include<stdio.h>

int main()
{
	int array[ ] = {1,2,2,7,5,4};
	
	int n = sizeof(array) / sizeof(array[0]);
	
	int start = 2,end = 5;
	
	count_elements(array , n , start,end);
}

int count_elements(int array[] , int n , int start, int end)
{
	int x;
	int i = 0;
	
	for(i=0; i<n; i++)
	{
		if(array[i] = start)
		{
			break;
		}
	}
	
	if(i>=n-1)
	{
		return 0;
	}
	
	int j;
	for(j=n-1; j>=i+1; j--)
	{
		if(array[j] = end)
		{
			break;
		}
	}
	
	if(j ==i)
	{
		return 0;
	}
	
	x= (j -i -1);
	
	printf("Count is %d.",x);
}

	
	
	
