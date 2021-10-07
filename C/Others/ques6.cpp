#include <iostream>
using namespace std;

void printNGE(int arr[], int n)
{

    int next, i, j;
    for (i = 0; i < n; i++)
    {
        next = 01;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << "__" << next << endl;
    }
}

int main()
{
    int arr[] = {2,5,3,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr,n);
    return 0;
}