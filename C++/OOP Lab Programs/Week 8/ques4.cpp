#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void getdata1()
    {
        cout << "enter first no.-";
        cin >> x;
    }
};
class B : public A
{
public:
    int y;
    void getdata2()
    {
        cout << "enter second no.-";
        cin >> y;
    }
};
class C : public B
{
public:
    void great()
    {
        int gr;
        if (x > y)
        {
            gr = x;
        }
        else
        {
            gr = y;
        }

        cout << "greatest is->" << gr << endl;
    }
};
int main()
{
    C obj;
    obj.getdata1();
    obj.getdata2();
    obj.great();
    return 0;
}