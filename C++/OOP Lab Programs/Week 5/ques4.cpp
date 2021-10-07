#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    friend void gcd(class A, class B);

public:
    void in()
    {
        cout << "enter no. 1: ";
        cin >> a;
    }
};
class B
{
    int b;
    friend void gcd(class A, class B);
    void in()
    {
        cout << "enter no. 2: ";
        cin >> b;
    }
};
void gcd(A a, B b)
{
    a.in();
    b.in();
    while (a.a != b.b)
    {
        if (a.a > b.b)
        {
            a.a -= b.b;
        }
        else
        {
            b.b -= a.a;
        }
    }

    cout << "gcd is: " << a.a << endl;
}
int main()
{
    A a;
    B b;
    gcd(a, b);
    return 0;
}