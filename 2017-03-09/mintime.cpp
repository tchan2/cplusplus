#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>

using namespace std;

unsigned int seed = (int)time(0);
double random (unsigned int & seed);
const int TOTAL = 10000;

int main()
{
    double min_time = 10000;
    double f1, f2, f3, x, y, z, t, d;
    double min_x, min_y, min_z;
    
    for (int i = 0; i < TOTAL; ++i)
    {
        f1 = random(seed);
        f2 = random(seed);
        f3 = random(seed);
        d = f1 + f2 + f3;
        x = 15*f1/d;
        y = 15*f2/d;
        z = 15*f3/d;
        t = sqrt(64 + x*x) / 3+y / 5 + sqrt(36 + z*z) / 4;
        
        if (t < min_time)
        {
            min_time = t;
            min_x = x;
            min_y = y;
            min_z = z;
        }
    }
    
    cout << endl;
    cout << fixed << showpoint << setprecision(5) << endl;
    cout << "Minimum time = " << setw(8) << min_time << endl;
    cout << "           x = " << setw(8) << min_x << endl;
    cout << "           y = " << setw(8) << min_y << endl;
    cout << "           z = " << setw(8) << min_z << endl;
    cout << endl;
}

double random (unsigned int & seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (MULTIPLIER*seed+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
