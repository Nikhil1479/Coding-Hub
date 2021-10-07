#include <iostream>
using namespace std;

class Rectangle
{
    int width, height;

public:
    void input()
    {

        cout << "Enter the  height of the rectangle :" << endl;
        cin >> height;
        cout << "Enter the  width of the rectangle :" << endl;
        cin >> width;
    }
    void displayArea()
    {
        cout << "The area of the rectangle is : " << width * height << endl;
    }
};
int main()
{
    Rectangle r, *rec;
    r.input();
    rec = &r;
    rec->displayArea();
    return 0;
}