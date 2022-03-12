#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

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
    Rectangle r;
    int length, breadth;

    cout << "Enter Length: " << endl;
    cin >> length;

    cout << "Enter Breadth: " << endl;
    cin >> breadth;

    r.setLength(length);
    r.setBreadth(breadth);

    cout << "Length of Rectangle is: " << r.getLength() << endl;
    cout << "Breadth of Rectangle is: " << r.getBreadth() << endl;

    cout << "Area of Rectangle is: " << r.area() << endl;
    cout << "Perimeter of Rectangle is: " << r.perimeter() << endl;
    return 0;
}