#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[30];
    int marks;

public:
    void input()
    {
        cout << "\n";
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Roll No.: " << endl;
        cin >> roll;
        cout << "Enter Marks: " << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "Name of Student: " << name << endl;
        cout << "Roll No. of Student: " << roll << endl;
        cout << "Marks of Student: " << marks << endl;
    }
};
int main()
{
    int n = 5;
    student a[n];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter data\n"<< i + 1;
        a[i].input();
    }
    for (int i = 0; i < 5; i++)
    {
        a[i].display();
    }
    return 0;
}