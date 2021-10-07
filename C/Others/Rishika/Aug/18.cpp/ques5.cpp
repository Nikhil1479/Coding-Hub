#include <iostream>
using namespace std;

class Box
{

public:
    float l;
    float w;
    float h;
    int input_Volume()

    {
        return l * w * h;
    }
};

int main()
{
    Box b;
    cout << "Enter l of the box : ";
    cin >> b.l;
    cout << "Enter w of the box : ";
    cin >> b.w;
    cout << "Enter h of the box : ";
    cin >> b.h;
    cout << "The volume of the box is " << b.input_Volume();
    return 0;
}