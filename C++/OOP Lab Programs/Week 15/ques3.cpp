#include <iostream>
using namespace std;

template <class t1, class t2>
t1 sum(t1 a, t2 b)
{
    return a + b;
}

int main()
{
    int a;
    float x;
    cout << "\nEnter  integer data : ";
    cin >> a;
    cout << "\nEnter  float data : ";
    cin >> x;
    cout << "\nThe sum is : " << sum(a, x);
    return 0;
}