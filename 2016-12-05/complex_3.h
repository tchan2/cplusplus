// Tammy Chan
// Write a program that function length() to class complex (any
// version) that returns the "length" of a complex number x. Test the
// function length in your driver file. (x) = sqrt(a^2+b^2)

#include <iostream>

using namespace std;

class complex
{
    public:
        complex () {}
        complex (double int_real, double int_imag);
        void InputC (istream &in);
        void OutputC (ostream &out);
        complex operator+ (complex x);
        complex operator- (complex x);
        complex operator* (complex x);
        complex operator/ (complex x);
        double length ();
    private:
        float real, imag;
};

ostream &operator << (ostream &out, complex x);
istream &operator >> (istream &in, complex x);
    
