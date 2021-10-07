#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle *ptr = new Rectangle();
    ptr->length = 20;
    ptr->breadth = 10;

    cout << "Area is " << ptr->area();
    return 0;
}