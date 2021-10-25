#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student()
    {
        cout << "Enter the name of Student : " << endl;
        cin >> name;
        cout << "Enter the roll of the Student : " << endl;
        cin >> roll;
    }
};
class Academic : public virtual Student
{
public:
    int a1, a2;
    Academic()
    {
        cout << "Enter the marks a1 of Student : " << endl;
        cin >> a1;
        cout << "Enter the marks a2 the Student : " << endl;
        cin >> a2;
    }
};
class Sports : public virtual Student
{
public:
    int s1, s2;
    Sports()
    {
        cout << "Enter the marks s1 of Student : " << endl;
        cin >> s1;
        cout << "Enter the marks s2 the Student : " << endl;
        cin >> s2;
    }
};
class Result : public Academic, public Sports
{
public:
    int total = a1 + a2 + s1 + s2;
    void display()
    {
        cout << "The name of the student is : " << name << endl;
        cout << "The roll of the student is : " << roll << endl;
        cout << "The a1 marks of the student is : " << a1 << endl;
        cout << "The a2 marks of the student is : " << a2 << endl;
        cout << "The s1 marks of the student is : " << s1 << endl;
        cout << "The s2 marks of the student is : " << s2 << endl;
        cout << "The total marks of the student is : " << total << endl;
    }
};
int main()
{
    Result obj;
    obj.display();
    return 0;
}