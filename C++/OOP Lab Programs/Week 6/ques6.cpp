#include <iostream>
using namespace std;

class Shape
{
    double area;

public:
    Shape(double radius)
    {
        area = 3.14 * radius * radius;
    }
    Shape(int edge)
    {
        area = edge * edge;
    }
    Shape(int l, int b)
    {
        area = l * b;
    }
    Shape(double h, double b)
    {
        area = 0.5 * h * b;
    }
    void display()
    {
        cout << "The area is : " << area << endl;
    }
};
int main()
{
    Shape obj1 = *new Shape(10);
    Shape obj2 = *new Shape(15);
    Shape obj3 = *new Shape(10, 20);
    Shape obj4 = *new Shape(10.57, 15.58);

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
}