#include <iostream>
using namespace std;

class Father
{
public:
    string father_name;
    int father_age;
    void getdata()
    {
        cout << "Enter Father's Name: " << endl;
        cin >> father_name;
        cout << "Enter Father's Age: " << endl;
        cin >> father_age;
    }
};

class child : public Father
{
    string son_name;
    int child_age;

public:
    void data()
    {
        cout << "Enter child's Name: ";
        cin >> son_name;
        cout << "Enter child's Age: ";
        cin >> child_age;
    }

    void check()
    {
        if (child_age > father_age)
        {
            cout << "Error Aborted!!" << endl;
        }
        else
        {
            cout << "Father's Name: " << father_name << endl;

            cout << "Father's Age: " << father_age << endl;
        }
    }
};

int main()
{
    child ob;
    ob.getdata();
    ob.data();
    ob.check();
    return 0;
}