#include<iostream>

using namespace std;


class Fraction
{
public:
    Fraction(int num, int den = 1) : m_numerator(num), m_denominator(den) {}

    Fraction operator+(const Fraction &f) 
    {
        return Fraction(this->m_numerator + f.m_numerator);
    }

    void getNumAndDen()
    {
        cout << m_numerator << "  " << m_denominator << endl;
    }

private:
    int m_numerator;
    int m_denominator;
};

//explicit-one-argument ctor
class Fraction1
{
public:
    explicit Fraction1(int num, int den = 1) : m_numerator(num), m_denominator(den) {}

    Fraction1 operator+(const Fraction1 &f) 
    {
        return Fraction1(this->m_numerator + f.m_numerator);
    }

    void getNumAndDen()
    {
        cout << m_numerator << "  " << m_denominator << endl;
    }

private:
    int m_numerator;
    int m_denominator;
};

class P {
public:
    P(int a, int b) 
    {
        cout << "P(int a,int b)\n";
    }

    P(int a, int b, int c)
    {
        cout << "non-explicit P(int a, int b, int c)\n";
    }

    explicit P(int a, int b, int c, int d)
    {
        cout << "explicit P(int a, int b, int c, int d)\n";
    }
};

void fp(const P &){}

int main()
{
    Fraction f(3, 5);
    Fraction ff = f + 3;
    ff.getNumAndDen();

    // Fraction1 f1(3, 5);
    // Fraction1 ff1 = f1 + 3;
    // ff1.getNumAndDen();

    P p1 = {77, 5};
    P p2 = {77, 5, 89};
    // P p3 = {77, 5, 89, 99};

    return 0;
}