#include <iostream>
using namespace std;

class Shape
{
public:
    void display()
    {
        cout << "The calculated area of the circle of given radius is : " << area() << endl;
        cout << "The display function of the base class Shape " << endl;
    }
    virtual double area() = 0;
};
class Circle : public Shape
{
public:
    double r;
    Circle()
    {
        cout << "Enter the value of radius of circle : ";
        cin >> r;
    }
    double area()
    {
        return 3.14 * r * r;
    }
    void display1()
    {
        cout << "The calculated area of the circle of given radius is : " << area() << endl;
    }
};
int main()
{
    Shape *obj = new Circle();
    obj->display();
}