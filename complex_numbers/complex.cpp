#include <iostream>

class Complex
{
    public:
    Complex(float real=0, float imag=0): m1(real), m2(imag){}

    void setReal(float x)
    {
        m1 = x;
    }
    void setImag(float x)
    {
        m2 = x;
    }
    Complex operator+(Complex &c_other)
    {
        Complex result;
        result.setReal(c_other.m1 + this->m1);
        result.setImag(c_other.m2 + this->m2);
        return result;
    }

    void display()
    {
        std::cout << m1 << "+i" << m2 << std::endl;
    }
    private :
    float m1;
    float m2;
};

int main()
{
    Complex c1(12, 5.6);
    Complex c2;

    c2.setReal(50);
    c2.setImag(5.5);


    Complex c3;
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}