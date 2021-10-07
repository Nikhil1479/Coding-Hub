#include <iostream>
using namespace std;

class Name
{
    string *first_Name, *last_Name, *full_Name;

public:
    Name()
    {
        first_Name = new string;
        last_Name = new string;
        full_Name = new string;
        cout << "Enter the first name : " << endl;
        cin >> *first_Name;
        cout << "Enter the last name : " << endl;
        cin >> *last_Name;
        *full_Name = *first_Name + " " + *last_Name;
        cout << "The name is : " << *full_Name << endl;
    }
};

int main()
{
    Name obj = *new Name();
}