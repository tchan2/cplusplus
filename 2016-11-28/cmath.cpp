// Tammy Chan
// Create the executable version of the class complex discussed in
// class by using makefile cmath.make for class complex. Design a
// function for the division of complex numbers.

#include <iostream>
#include "complexh_22.h"

using namespace std;

int main()
{
    char choice;
    complex a, b, c;
    cout << "Enter a complex pair such as (5.1, 2.3i): ";
    a.InputC (cin);
    cout << "Enter a complex pair such as (5.1, 2.3i): ";
    b.InputC (cin);
    cout << "Enter a choice ((a)dd, (s)ub, (m)ult: ";
    cin >> choice;
    switch (choice)
    {
        case 'a' : c = a.AddC(b);
            break;
        case 's' : c = a.SubC(b);
            break;
        case 'm' : c = a.MultC(b);
            break;
        default : cout << "Entry error" << endl;
    }

cout << "The result is: ";
c.OutputC (cout);
return 0;
}
