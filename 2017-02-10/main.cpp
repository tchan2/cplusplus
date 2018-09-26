#include <iostream>
using namespace std;

int main()
{
    rectangle r;
    r.set_width(3);
    r.set_length(4);
    cout << "The perimeter of this rectangle is: " << r.get_perimeter << endl;
    cout << "The area of this rectangle is: " << r.get_area << endl;
}
