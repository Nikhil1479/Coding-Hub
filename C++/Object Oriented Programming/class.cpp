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

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1, r2;

    r1.length = 10;
    r1.breadth = 20;

    r2.length = 20;
    r2.breadth = 40;

    cout << "R1 Area: " << r1.area();
    cout << "\nR1 Perimeter: " << r1.perimeter();

    cout << "\nR2 Area: " << r2.area();
    cout << "\nR2 Perimeter: " << r2.perimeter();
    return 0;
}