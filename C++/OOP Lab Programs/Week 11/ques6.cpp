#include <iostream>
#include <conio.h>

using namespace std;
class String
{
public:
    string s;

    String operator+(String &c1)
    {
        String str1;
        str1.s = this->s + " " + c1.s;
        return str1;
    }

    void display()
    {
        cout << "Concatenated String is: " << this->s << endl;
    }
};

int main(void)
{
    String x, y, z;
    cout << "\nEnter the first string : ";
    cin >> x.s;
    cout << "\nEnter the second string : ";
    cin >> y.s;
    z = x + y;
    z.display();
    return 0;
}