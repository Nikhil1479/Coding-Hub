#include <iostream>
using namespace std;
class Father
{
public:
    string name;
    int age;
    void getdata()
    {
        cout << "Enter the name of the Father : " << endl;
        cin >> name;
        cout << "Enter the age of the Father : " << endl;
        cin >> age;
    }
    void putdata()
    {
        cout << "The name of the father is : " << name << endl;
        cout << "The age of the father is : " << age << endl;
    }
};
class Son : public Father
{
public:
    string name;
    int age;
    void getdata()
    {
        cout << "Enter the name of the Son : " << endl;
        cin >> name;
        cout << "Enter the age of the Son : " << endl;
        cin >> age;
    }
    void putdata()
    {
        cout << "The name of the son is : " << name << endl;
        cout << "The age of the son is : " << age << endl;
    }
};
class Grandson : public Son
{
public:
    string name;
    int age;
    void getdata()
    {
        cout << "Enter the name of the Grandson : " << endl;
        cin >> name;
        cout << "Enter the age of the Grandson : " << endl;
        cin >> age;
    }
    void putdata()
    {
        cout << "The name of the grandson is : " << name << endl;
        cout << "The age of the grandson is : " << age << endl;
    }
};
int main()
{
    Grandson obj;
    obj.Son::Father::getdata();
    obj.Son::getdata();
    obj.getdata();
    obj.Son::Father::putdata();
    obj.Son::putdata();
    obj.putdata();
}