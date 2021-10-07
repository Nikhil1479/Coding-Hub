#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "In constructor of A" << endl;
    }
    ~A()
    {
        cout << "In destructor of A" << endl;
    }
};
class B
{
public:
    B()
    {
        cout << "In constructor of B" << endl;
    }
    ~B()
    {
        cout << "In destructor of B" << endl;
    }
};
class C : public virtual B
{
public:
    C()
    {
        cout << "In constructor of C" << endl;
    }
    ~C()
    {
        cout << "In destructor of C" << endl;
    }
};

class D : public C, public virtual A
{
public:
    D()
    {
        cout << "In constructor of D" << endl;
    }
    ~D()
    {
        cout << "In destructor of D" << endl;
    }
};
int main()
{
    D object;
    return 0;
}