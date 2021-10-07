#include <iostream>
#include <stdlib.h>
using namespace std;

class A
{
protected:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter the Valueof A and B: \n";
        cin >> a >> b;
    }
};

class B : public A
{
public:
    void putdata()
    {
        cout << "Values Entered in Class A are: " << a << " And " << b;
    }
};
int main()
{
    B obj;
    obj.getdata();
    obj.putdata();

    return 0;
}