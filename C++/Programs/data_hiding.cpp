#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        void setLength(int l)    // accessors
        {
            length = l;
        }
        void setBreadth(int b) // accessors
        {
            breadth = b;
        }

        int getLength()   // mutators
        {
            return length;
        }
        int getBreadth() //mutators
        {
            return breadth;
        }

    int area()
    {
        return length *breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    int len, bread;
    cout << "Enter Length of Rectangle ";
    cin >> len;

    cout << "Enter Breadth of Rectangle ";
    cin >> bread;

    r.setLength(len);
    r.setBreadth(bread);

    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    return 0;
}