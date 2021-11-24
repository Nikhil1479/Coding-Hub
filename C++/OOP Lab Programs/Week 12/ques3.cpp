#include <iostream>
using namespace std;

class Father
{
public:
    virtual void activity()
    {
        cout << "Father's Task is to go to Ofiice " << endl;
    }
};
class Son : public Father
{
public:
    void activity()
    {
        cout << "Son's Task is to go to School " << endl;
    }
};
int main()
{
    Father *obj = new Father();
    obj->activity();
    obj = new Son();
    obj->activity();
}