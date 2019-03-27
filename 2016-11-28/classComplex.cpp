// Tammy Chan
// Create the executable version of the class complex discussed in
// class by using makefil cmath.make for class complex. Design a
// function for the division of complex numbers.

#include <iostream>

using namespace std;

class complex
{
    public:
        void InputC (istream&in);
        void OutputC (ostream&out);
        complex AddC (complex x);
        complex SubC (complex x);
        complex MultC (complex c);
    private:
        float real, image;
}
    
    
