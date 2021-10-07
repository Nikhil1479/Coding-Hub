#include <iostream>
using namespace std;

class Name
{
    string name;

public:
    Name()
    {
        name = *new string;
        cout << "Enter the Name : " << endl;
        cin >> name;
        cout << "The name is : " << name << endl;
    }
    ~Name()
    {
        delete &name;
    }
};
int main()
{
    Name obj = *new Name();
}