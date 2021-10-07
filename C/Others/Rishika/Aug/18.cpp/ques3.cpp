#include <iostream>
using namespace std;

class circrpr
{
public:
    float r, area;

    void input()
    {
        cout << "Enter radius of a circle:";
        cin >> r;
    }

    void findArea()
    {
        area = 3.14 * r * r;
    }

    void display()
    {
        cout << "Area of circle is:" << area;
    }
};

int main()
{

    circrpr obj;

    obj.input();
    obj.findArea();
    obj.display();

    return 0;
}