// Tammy Chan
// Write a program that will recognize and evaluate prefix
// expressions. First design and implement a class of prefix
// expressions. This class should contain methods to recognize and
// evaluate prefix expressions. 

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class Base_class
{
    public:
        void assigns_values (double a, double b, double c)
	{
	    side_a = a;
	    side_b = b;
	    side_c = c;
	}
   protected:
            double side_a, side_b, side_c;
};


class Cube : public Base_class
{
    public:
        double volume()
	{
	    return side_a * side_b * side_c;
	}
};

class Rectangle : public Base_class
{
    public:
        bool rect()
	{
	    if (side_a*side_a + side_b*side_b == side_c*side_c)
	    {
		if (side_a*side_a + side_c*side_c == side_b*side_b)
		{    
		    if (side_c*side_c + side_b*side_b == side_a*side_a)
			return true;
		}
	    }
	    else
		return false;
	}
};


int main()
{
    Cube c;
    Rectangle r;
    double a, b, d;
    cout << endl;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> d;
    c.assigns_values(a, b, d);
    r.assigns_values(a, b, d);
    cout << endl;
    cout << "volume: ";
    cout << c.volume() << '\n';
    cout << "rectangle: ";
    cout << boolalpha << r.rect() << endl;
    return 0;
}
