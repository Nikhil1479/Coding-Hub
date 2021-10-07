#include <iostream>
using namespace std;

void sort_selection(int *, int);
void sort_bubble(int *, int);
void display(int *, int);

int main(void)
{
    int n, ch;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter your choice\t1.Selection sort technique\t2.Bubble Sort technique " << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        sort_selection(arr, n);
        display(arr, n);
        break;

    case 2:
        sort_bubble(arr, n);
        display(arr, n);
        break;

    default:
        cout << "Invalid choice" << endl;
    }
}

void sort_selection(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void sort_bubble(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag++;
            }
        }
        if (flag == 0)
            break;
    }
}

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << " " << a[i];
}