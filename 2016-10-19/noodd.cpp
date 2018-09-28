// Modify the while loop in the main program so that all odd numbers are erased from the vector.

#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

double random (unsigned int &seed);
unsigned int seed = (unsigned int) time(0);
const int SIZE = 10;
void initialize (vector <int> & v);
void print_vector (vector <int> :: iterator p, vector <int> :: iterator n);
bool odd (int n);
void erase_odd_numbers (vector <int> & v);

int main()
{
    vector <int> v;
    initialize (v);
    cout << "Vector before erasing all odd #s: " << endl;
    erase_odd_numbers(v);
    cout << "Vector after erasing all odd #s: " << endl;
    print_vector (v.begin(), v.end());
}

void initialize (vector <int> & v)
{
    for (int i = 0; i < SIZE; ++i)
        v.push_back (int(11*random(seed));
}

void print_vector (vector <int> :: iterator b, vector <int> :: iterator e)
{
    for (vector <int> :: iterator i = b; i < e; ++i)
        cout << setw(3) << *i;
    cout << endl;
}

void erase_odd_numbers (vector <int> & v)
{
    vector <int> :: iterator p = v.begin();
    while (p != v.end())
    {
        p = find_if (p, v.end(), odd);
        if (p != v.end())
            p = v.erase(p);
    }
}

bool odd (int n)
{
    return n%2;
}

double random (unsigned int & seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (MULTIPLIER*seed+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
