#include <iostream>
using namespace std;

class fraction
{

private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << this->numerator << " / " << denominator << endl;
    }

    void simplify()
    {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 1; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
    fraction add(fraction const &f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

        // numerator = num;
        // denominator = lcm;
        fraction fnew(num, lcm);

        fnew.simplify();
        return fnew;
    }
    fraction operator+(fraction const &f2) const
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

        // numerator = num;
        // denominator = lcm;
        fraction fnew(num, lcm);

        fnew.simplify();
        return fnew;
    }

    fraction operator*(fraction const &f2) const
    {
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;

        fraction fnew(n, d);
        fnew.simplify();
        return fnew;
    }

    bool operator==(fraction f2) const
    {
        return (numerator == f2.numerator && denominator == f2.denominator);
    }

    void multiply(fraction const &f2)
    {
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplify();
    }
    // pre-increment
    fraction &operator++()
    {
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    // post-increment
    fraction operator++(int)
    {
        fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        fnew.simplify();

        return fnew;
    }
    // += overloading
    fraction& operator+=(fraction const &f2){
         int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);

         numerator = num;
         denominator = lcm;
      
        simplify();

        return *this;
        
    }
};

int main()
{

    fraction f1(10, 2);
    fraction f2(15, 4);

    (f1+=f2) += f2;

    f1.print();

    // fraction f3 = f1++;
    // f1.print();
    // f3.print();

    //(++f1);
    // f1.print();

    // fraction f3 = ++(++f1);
    // f1.print();
    // f3.print();

    /*
     fraction f3 = f1.add(f2);

     fraction f4 = f1+f2;
     fraction f5 = f1 * f2;
     if(f1 == f2){
        cout << " equal" << endl;
     }
     else{
        cout << "not eaqual" << endl;
     }
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();
    */

    return 0;
}