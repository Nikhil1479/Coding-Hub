#include <iostream>
using namespace std;

template <class t>
void sum(t a, t b)
{
    cout << "\nSum = " << a + b << endl;
}

int main()
{
    int a, b;
    float x, y;
    cout << "\nEnter two integer data: ";
    cin >> a >> b;
    cout << "\nEnter two float data: ";
    cin >> x >> y;
    sum(a, b);
    sum(x, y);
    return 0;
}