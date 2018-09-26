// Tammy Chan
// February 10th, 2017
// Design and implement an ADT that represents a rectangle. Include typical operations, such as setting and retrieving the dimensions of the rectangle, and finding the area and the perimeter of the rectangle.

// rectangle.h

#include <iostream>

using namespace std;

class rectangle
{
    public:
    {
        rectangle();
        void set_width(double);
        void set_length(double);
        float get_perimeter();
        float get_area();
    }
  
    private:
    {
        double width;
        double length;
        float area;
        float perimeter;
    }
}
