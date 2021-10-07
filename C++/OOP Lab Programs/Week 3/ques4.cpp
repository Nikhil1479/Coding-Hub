#include <iostream>
using namespace std;

void AddByValue(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
}

void AddByReference(int &a, int &b)
{
    int sum = a + b;
    cout << sum << endl;
}

void AddByAddress(int *a, int *b)
{
    int sum = *a + *b;
    cout << sum << endl;
}

int main()
{
    int a, b;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;

    AddByValue(a, b);
    AddByReference(a, b);
    AddByAddress(&a, &b);
}