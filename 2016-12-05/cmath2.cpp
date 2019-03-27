// Tammy Chan
// Write a program that uses the final version of class complex
// (complex_3.h) to obtain the roots of ax^2+bx+x=0 and test your
// program for a=1, b=1, c=1.

#include <iostream>
#include <cmath>
#include <math.h>
#include "complex_3.h"

double a, b, c, root1, root2, realRoot, discriminant;
float imagRoot;
float solveQuad (const double&, const double&, const double&);

using namespace std;

int main()
{    
    cout << "Enter values of a, b, c accordingly. ";
    cout << endl;
    cin >> a >> b >> c;
    solveQuad (a, b, c);
    return 0;
}

float solveQuad (const double&, const double&, const double&)
{
    discriminant = (b*b)-(4*a*c);
    if (a == 0)
	cout << "Can't divide by zero." << endl;
    else
	if (discriminant < 0)
	{
	    cout << "Imaginary roots." << endl;
	    realRoot = -b/(2*a);
	    imagRoot = sqrt(-(discriminant))/(2*a);
	    cout << "Your first root is: " << realRoot << " + " << imagRoot << "i" << endl;
	    cout << "Your second root is: " << realRoot << " - " << imagRoot << "i" << endl;
	 }
         else
	     if (discriminant > 0)
             {
	         root1 = (-b + (sqrt(discriminant)))/(2*a);
		 root2 = (-b - (sqrt(discriminant)))/(2*a);
		 cout << "Your roots are: " << root1 << " and " << root2 << endl;
	     }
}
    
					  
