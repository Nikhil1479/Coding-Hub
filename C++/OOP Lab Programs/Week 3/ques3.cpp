#include <iostream>
using namespace std;

void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Call By Value";
    cout << "\nAfter Swapping A =" << a << endl;
    cout << "\nB = " << b << endl;
}

void swapByReference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Call By Reference";
    cout << "\nAfter Swapping A =" << x << endl;
    cout << "\nB = " << y << endl;
}

void swapByAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Call By Address";
    cout << "\nAfter Swapping A =" << *a << endl;
    cout << "\nB = " << *b << endl;
}

int main()
{
    int a, b;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;
    int x = a;
    int y = b;

    swapByAddress(&a, &b);
    swapByValue(a, b);
    swapByReference(x, y);
}