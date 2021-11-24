#include <iostream>
using namespace std;

template <class T>

void Swap(T &a, T &b)
{

    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{

    int a, b;

    cout << "Enter numbers:";
    cin >> a >> b;

    cout << "Before Swapping:";

    cout << "\na value is:" << a;
    cout << "\ny value is:" << b;

    Swap(a, b);

    cout << "\n\nAfter Function Templates:\n";

    cout << "\na value is:" << a;
    cout << "\nb value is:" << b;

    return 0;
}