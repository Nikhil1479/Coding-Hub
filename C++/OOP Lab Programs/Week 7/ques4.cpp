#include <iostream>
using namespace std;
class rectangle
{
public:
    int breadth;
    int length;
    void getdata()
    {
        cout << "Enter Breadth of rectangle: " << endl;
        cin >> breadth;
        cout << "Enter Length of rectangle: " << endl;
        cin >> length;
    }
};
class area : public rectangle
{
public:
    void rarea()
    {
        cout << "Area of rectangle is: " << breadth * length << endl;
    }
};
int main()
{
    area obj;
    obj.getdata();
    obj.rarea();
    return 0;
}