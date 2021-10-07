#include <iostream>
using namespace std;

class add
{
    public:
    int x, y, total;

    add(int x1, int y1)
    {
        x = x1;
        y = y1;
        total =0;        
    }

    void sum()
    {
        total = x + y;
        cout<<"\nSum : "<<total;
    }
};

int main(void)
{
    add ob1(10, 20);
    add ob2(ob1);
    ob1.sum();
    ob2.sum();
}