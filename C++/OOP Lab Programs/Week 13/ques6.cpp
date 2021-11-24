#include <iostream>
using namespace std;

class ABC
{
public:
    virtual void display()
    {
        cout << "\n In Base Class ABC\n";
    }
};
class BBC : public ABC
{
public:
    void display()
    {
        cout << "In Derived Class BBC\n";
    }
};
class KBC : public ABC
{
public:
    void display()
    {
        cout << "In Derived Class KBC\n";
    }
};
int main()
{
    BBC d1;
    KBC d2;
    ABC *bptr = &d1;
    bptr->display();
    bptr = &d2;
    bptr->display();
    return 0;
}