#include <iostream>
using namespace std;

#define MAX 10

class person
{
private:
    char name[30];
    int age;

public:
    void getDetails(void);

    void putDetails(void);
};

void person::getDetails(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
}

void person::putDetails(void)
{
    cout << "Person details:\n";
    cout << "Name:" << name << ",Age:" << age;
}

int main()
{
    person std[MAX];
    int n, i;

    cout << "Enter total number of entries: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter details of person: " << i + 1 << ":\n";
        std[i].getDetails();
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        cout << "Details of person: " << (i + 1) << ":\n";
        std[i].putDetails();
    }

    return 0;
}