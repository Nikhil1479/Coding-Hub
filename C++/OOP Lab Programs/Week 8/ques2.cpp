#include <iostream>
using namespace std;

class A
{
public:
    int x;
    void inputx()
    {
        cout << "Enter the value of x : ";
        cin >> x;
    }
};
class B : public A
{
public:
    int y;
    void inputy()
    {
        cout << "Enter the value of y : ";
        cin >> y;
    }
};
class GCD : public B
{
public:
    void gcd()
    {
        while (x != y)
        {
            if (x > y)
                x -= y;
            else
                y -= x;
        }
        cout << "\nGcd is : " << x << endl;
    }
};
int main()
{
    GCD ob;
    ob.inputx();
    ob.inputy();
    ob.gcd();
}