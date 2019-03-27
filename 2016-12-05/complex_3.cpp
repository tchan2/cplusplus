// Tammy Chan

#include <iostream>
#include <cmath>
#include "complex_3.h"

using namespace std;

complex :: complex (double int_real, double int_imag)
{
    real = int_real;
    imag = int_imag;
}

complex complex :: operator+ (const complex x)
{
    complex temp;
    temp.real = real + x.real;
    temp.imag = imag + x.imag;
    return (temp);
}

complex complex :: operator- (const complex x)
{
    complex temp;
    temp.real = real - x.real;
    temp.imag = imag - x.imag;
    return (temp);
}

complex complex :: operator* (complex x)
{
    complex temp;
    temp.real = (real*x.real) - (imag*x.imag);
    temp.imag = (imag*x.imag) + (real*x.real);
    return (temp);
}

complex complex :: operator/ (complex x)
{
    complex temp;
    temp.real = (((real)*(x.real))+((imag)*(x.imag)))/pow(x.real,2)+pow(x.imag,2);
    temp.imag = (((x.real)*(imag))-((real)*(x.imag)))/(pow(x.real,2)+pow(x.imag,2));
    return (temp);
}

double complex :: length ()
{
    return sqrt((real*real) + (imag*imag));
}

void complex :: InputC (istream &in)
{
    char i, paren, comma;
    in >> paren >> real >> comma >> imag >> paren;
}

void complex :: OutputC (ostream &out)
{
    out << "(" << real << ", " << imag << "i)" << endl;
}

istream &operator >> (istream &in, complex &x)
{
    x.InputC(in);
    return (in);
}

ostream &operator << (ostream &out, complex x)
{
    x.OutputC(out);
    return (out);
}
