#include <stdio.h>

/*
      $      $
     $$$    $$$
    $$$$$  $$$$$
   $$$$$$$$$$$$$$  
*/
int main()
{

	int n;

	printf("Enter N: \n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < (10 - 1) - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < ((2 * i) + 1); j++)
		{
			printf("$");
		}
		for (int j = 0; j < (10 - 1) - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (10 - 1) - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < ((2 * i) + 1); j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
