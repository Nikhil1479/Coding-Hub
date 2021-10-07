#include <iostream>
using namespace std;

class objCount
{
private:
    static int count;

public:
    objCount()
    {
        count++;
    }

    void display()
    {
        cout << "Object Count: " << count;
    }
};
int objCount::count = 0;
int main(void)
{
    objCount a;
    objCount b;
    objCount c;
    c.display();
}