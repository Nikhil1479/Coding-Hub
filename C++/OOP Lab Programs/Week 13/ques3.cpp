#include <iostream>
using namespace std;

class A
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class"
             << " variable var_base: " << var_base << endl;
    }
};

class B : public A
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class"
             << " variable var_base: " << var_base << endl;
        cout << "Displaying Derived "
             << " class variable var_derived: "
             << var_derived << endl;
    }
};

int main()
{
    A *base_pointer;
    A obj_base;
    B obj_derived;

    base_pointer = &obj_derived;

    base_pointer->var_base = 10;
    base_pointer->display();

    base_pointer->var_base = 20;
    base_pointer->display();

    B *derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_base = 30;
    derived_pointer->var_derived = 40;
    derived_pointer->display();
    return 0;
}