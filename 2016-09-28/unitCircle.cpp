
//Tammy Chan
//Write a program that declares a 10 element array of structures that
//store x and y coordinates of a point in the unit circle. Coordinates
//x and y should be assigned randomly. Content of an array should be
//printed on the monitor in a readable fashion.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>

struct point
{
    double x;
    double y;
};

unsigned int seed;
const int SIZE = 10;
double random (unsigned int&seed);
void print_array (point a[]);
void fill_array (point a[SIZE]);

using namespace std;

int main ()
{
    point a[SIZE];
    fill_array (a);
    print_array(a) ;
    return 0;
}

void print_array (point a[])
{
    cout << fixed << showpoint << setprecision(5);
    for (int i=0; i < SIZE; ++i)
	cout << a[i].x << " " << a[i].y << endl;
}

void fill_array (point a[])
{
    double x,y;
    for(int i=0; i < SIZE; ++i)
    {
	do
	{
	    x = random(seed);
	    y = random(seed);
	} while (sqrt (x*x + y*y) > 1);
        a[i].x = x;
        a[i].y = y;
    }
}

double random (unsigned int&seed) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (MULTIPLIER*seed+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
 
