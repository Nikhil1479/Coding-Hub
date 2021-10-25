#include <iostream>
using namespace std;
class Rectangle
{
public:
    int l, b;
    int area1 = 0;

    void getdata1()
    {
        cout << "\nEnter the length and breadth ";
        cin >> l >> b;
    }
    void area3()
    {

        area1 = l * b;
    }
};
class Triangle
{
public:
    int base, height;
    int area2 = 0;
    void getdata2()
    {
        cout << "\nEnter the base and height ";
        cin >> base >> height;
    }
    void area4()
    {

        area2 = 0.5 * base * height;
    }
};
class Area : public Triangle, public Rectangle
{
public:
    void display()
    {
        cout << "\nThe area of rectangle " << area1;
        cout << "\nThe area of triangle " << area2;
    }
};
int main()
{
    Area obj;
    obj.getdata1();
    obj.area3();
    obj.getdata2();
    obj.area4();
    obj.display();
    return 0;
}