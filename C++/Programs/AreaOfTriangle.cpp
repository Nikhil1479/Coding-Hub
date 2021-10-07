#include <iostream>
using namespace std;

int main()
{
    int area, base, height;
    cout << "Enter Base of Triangle" << endl;
    cin >> base;
    cout << "Enter Height of Triangle" << endl;
    cin >> height;

    area = (base * height) / 2;

    cout << "Area of Triangle is: " << area << endl;

    return 0;
}