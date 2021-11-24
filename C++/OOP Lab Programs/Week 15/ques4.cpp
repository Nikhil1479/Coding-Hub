#include <iostream>
using namespace std;
template <class x, class y>
class sum
{
    y s;

public:
    sum(x a, y b)
    {
        s = a + b;
    }
    void display()
    {
        cout << "Sum: " << s;
    }
};
int main()
{
    int a;
    float x;
    cout << "\nInput Integer Value: ";
    cin >> a;
    cout << "\nInput float Value: ";
    cin >> x;
    sum<int, float> object(a, x);
    object.display();
}