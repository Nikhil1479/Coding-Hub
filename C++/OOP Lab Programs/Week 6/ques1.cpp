#include <iostream>
using namespace std;

class Student
{
    string name;
    int roll, marks;

public:
    Student()
    {
        cout << "Enter the name : " << endl;
        cin >> name;
        cout << "Enter the roll number : " << endl;
        cin >> roll;
        cout << "Enter the marks : " << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "Student Info :" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Student obj;
    obj.display();
}