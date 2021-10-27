#include <iostream>

using namespace std;
class Complex
{
public:
    int real, img;

    void operator+(Complex &c1)
    {
        int x, y;
        x = c1.real + this->real;
        y = c1.img + this->img;
        cout << "\n(" << c1.real << "+" << c1.img << "i)+(" << this->real << "+" << this->img << "i)=(" << x << "+" << y << "i)";
    }

    void operator*(Complex &c1)
    {
        int x, y;
        x = c1.real * this->real - c1.img * this->img;
        y = c1.real * this->img + c1.img * this->real;
        cout << "\n(" << c1.real << "+" << c1.img << "i)*(" << this->real << "+" << this->img << "i)=(" << x << "+" << y << "i)";
    }

    Complex operator++()
    {
        Complex x;
        x.real = ++real;
        x.img = ++img;
        return x;
    }
};

int main(void)
{
    Complex a, b;
    cout << "\nEnter real and imaginary part of first complex number:";
    cin >> a.real >> a.img;
    cout << "\nEnter real and imaginary part of second complex number:";
    cin >> b.real >> b.img;
    a + b;
    a *b;
    return 0;
}