// Determine the order of three user-inputted numbers.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void determine_order (double&a, double&b, double&c);
double a, b, c;

int main()
{
    cout << fixed << showpoint << setprecision(1);
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    determine_order (a, b, c);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

void determine_order (double&a, double&b, double&c)
{
    if (a > b)
    {
        swap (a, b);
        if (b > c)
            swap (b, c);
        if (a > b)
            swap (a, b);
    }
    
    else
    {
        if (b > c)
            swap (b, c);
        if (a > b)
            swap (a, b);
    }
}

void swap (double&a, double&b, double&c)
{
    double temp;
    temp = a;
    a = b;
    temp = b;
}
