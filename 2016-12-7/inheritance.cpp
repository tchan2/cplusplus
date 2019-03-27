// Tammy Chan
// Modify the example for the inheritance classes discussed in the
// class to be able to run the following main program.

#include <iostream>

using namespace std;

class Base_class
{
    public:
        void enter_sides ()
	{
	    double_a;
	    double_b;
	    cout << "Enter side a: ";
	    cin >> double_a;
	    cout << "Enter side b: ";
	    cin >> double_b;
	}
   protected:
        int double_a, double_b;
};

class Triangle : public Base_class
{
    public:
        int area()
	{
	    return double_a*double_b/2;
	}
};

class Rectangle : public Base_class
{
    public:
        int area()
	{
	    return double_a*double_b;
	}
};

int main()
{
    Triangle t;
    Rectangle r;
    cout << endl;
    cout << "Enter sides of the right triangle: " << endl;
    t.enter_sides();
    cout << "Area of the triangle is: ";
    cout << t.area() << '\n';
    cout << endl;
    cout << "Enter sides of the rectangle: " << endl;
    r.enter_sides();
    cout << "Area of the rectangle is: ";
    cout << r.area() << endl;
    cout << endl;

    return 0;
}
