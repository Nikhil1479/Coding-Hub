#include <iostream>
#include <math.h>
using namespace std;

class Complex
{

private:
    double real, imag;

public:
    Complex()
    {
        this->real = this->imag = 0;
    }

    Complex(double r, double i)
    {
        this->real = r;
        this->imag = i;
    }

    Complex(Complex &obj)
    {
        this->real = obj.real;
        this->imag = obj.imag;
    }

    int compare(Complex &obj)
    {
        double modulusThis = sqrt(this->real * this->real + this->imag * this->imag);
        double modulusOther = sqrt(obj.real * obj.real + obj.imag * obj.imag);
        if (modulusThis > modulusOther)
        {
            return 1;
        }
        if (modulusThis < modulusOther)
        {
            return -1;
        }
        return 0;
    }

    void print()
    {
        cout << real << "+" << imag << "i" << endl
             << endl;
    }

    double getReal() const
    {
        return real;
    }

    double getImag() const
    {
        return imag;
    }
    void setReal(double re)
    {
        real = re;
    }
    void setImag(double im)
    {
        imag = im;
    }
};

int main()
{
    double real1, imag1, real2, imag2;

    cout << "Enter the Real part of First Number: ";
    cin >> real1;
    cout << "Enter the imaginary part of First Number: ";
    cin >> imag1;
    Complex obj1(real1, imag1);
    obj1.print();

    cout << "Enter the Real part of Second Number: ";
    cin >> real2;
    cout << "Enter the Imaginary part of second number: ";
    cin >> imag2;
    Complex obj2(real2, imag2);
    obj2.print();

    if (obj1.compare(obj2) == 1)
    {
        cout << "The Complex 1 is bigger than Complex 2\n";
    }
    if (obj1.compare(obj2) == -1)
    {
        cout << "The Complex 2 is bigger than Complex 1\n";
    }
    if (obj1.compare(obj2) == 0)
    {
        cout << "The Complex 2 is equal Complex 1\n";
    }

    cin >> imag1;
    return 0;
}