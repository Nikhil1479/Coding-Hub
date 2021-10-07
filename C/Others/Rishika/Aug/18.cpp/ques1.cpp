#include <iostream>
using namespace std;

#define MAX_LENGTH 100

int main()
{
    char name[MAX_LENGTH] = {0};
    int age;

    cout << "Enter name of the person: ";
    cin.getline(name, MAX_LENGTH);
    cout << "Enter age: ";
    cin >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}