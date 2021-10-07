// Wap to find area of circle, square, rectangle & triangle by using function overloading.

#include <iostream>
using namespace std;

float area(float r)
{
    float area;
    area = 3.14 * r * r;
    return area;
}
int area(int side)
{
    int area;
    area = side * side;
    return area;
}
int area(int l, int breadth)
{
    int area;
    area = l * breadth;
    return area;
}

float area(float h, float b)
{
    int area;
    area = 0.5 * h * b;
    return area;
}

int main()
{
    int l, breadth, side, h, b;
    float r;
    int no;
    do
    {
        cout << "Area" << endl;
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Square" << endl;
        cout << "3. Area of Rectangle" << endl;
        cout << "4. Area of Triangle" << endl;
        cin >> no;
        switch (no)
        {
        case 1:
        {
            cout << "Enter the Radius of Circle" << endl;
            cin >> r;
            cout << "Area of Circle is: " << area(r);
            break;
        }
        case 2:
        {
            cout << "Enter the Side of Square" << endl;
            cin >> side;
            cout << "Area of Square is: " << area(side);
            break;
        }
        case 3:
        {
            cout << "Enter the Length and Breadth of Rectangle: " << endl;
            cin >> l >> breadth;
            cout << "Area of Rectangle is: " << area(l, breadth);
            break;
        }
        case 4:
        {
            cout << "Enter the Base and Height of Triangle: " << endl;
            cin >> b >> h;
            cout << "Area of Triangle is: " << area(h, b) << endl;
            break;
        }
        default:
            cout << "Not a Valid Option" << endl;
        }
    } while (no != 4);

    return 0;
}