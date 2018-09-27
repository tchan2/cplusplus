// Write a program that creates a vector of structures and values of the integer and double field should be random values. Sort the first vector with respect to n, and sort the second with respect to x.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

struct vector_element
{
    int n;
    double x;
}

double random (unsigned int &seed);
unsigned int seed = (unsigned int) time(0);
const int SIZE = 5;

void fill_vector (vector <vector_element> &v);
void print_vector (vector <vector_element> v);
void sort_first_vector (vector <vector_element) &v);
void sort_second_vector (vector <vector_element) &v);
bool compare1 (const vector_element &a, const vector_element &b);
bool compare2 (const vector_element &a, const vector_element &b);

int main()
{
    vector <vector_element> v;
    fill_vector(v);
    
    cout << "Vector v before sorting: " << endl;
    print_vector(v);
    
    cout << "Vector v sorted with respect to n: " << endl;
    sort_first_vector(v);
    print_vector(v);
    
    cout << "Vector v sorted with respect to x: " << endl;
    sort_second_vector(v);
    print_vector(v);
    cout << endl;
    
    return 0;
}

void sort_first_vector (vector <vector_element> &v)
{
    sort (v.begin(), v.end(), compare1);
}

void sort_second_vector (vector <vector_element> &v)
{
    sort (v.begin(), v.end(), compare2);
}

void fill_vector (vector <vector_element> &v)
{
    vector_element p;
    
    for (int i = 0; i < SIZE; ++i)
    {
        p.n = int (10 * random(seed));
        p.x = 10 * random(seed);
        v.push_back (p);
    }
}

void print_vector (vector <vector_element> v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << setw(5) << v[i].n;
    cout << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << fixed << setprecision(1) << setw(5) << v[i].x;
    cout << endl;
}

bool compare1 (const vector_element &a, const vector_element &b)
{
    return a.n > b.n;
}

bool compare2 (const vector_element &a, const vector_element &b)
{
    return a.x < b.x;
}

double random (unsigned int & seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (MULTIPLIER*seed+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
