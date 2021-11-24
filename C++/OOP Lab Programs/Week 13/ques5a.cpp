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
    BBC obj1;
    KBC obj2;
    ABC *obj[2];
    obj[0] = &obj1;
    obj[1] = &obj2;
    for (int i = 0; i < 2; i++)
    {
        obj[i]->display();
    }
    return 0;
}