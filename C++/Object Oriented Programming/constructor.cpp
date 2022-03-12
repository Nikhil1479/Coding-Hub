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
        if (l < 0)
        {
            length = 1;
        }
        else
        {
            length = l;
        }
    }

    void setBreadth(int b)
    {
        if (b < 0)
        {
            breadth = 1;
        }
        else
        {
            breadth = b;
        }
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
    Rectangle(int l = 0, int b = 0) // Paramaterized Constructor !Initial Values of l and b is 0 and 0
                                    // !(That will also behave like default or non paramaterized constructor)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &rect) // Copy Constructor
    {
        length = rect.length;
        breadth = rect.breadth;
    }
};

int main()
{
    Rectangle r(10, 20);
    Rectangle r2(r);
    cout << "Area of R = " << r.area() << endl;
    cout << "Area of R2 = " << r2.area() << endl;
    return 0;
}