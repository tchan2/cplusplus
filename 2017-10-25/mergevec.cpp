// Write a program that 1) Declares two vectors of random integers, each of size 6. 2) Sorts the vectors in the ascending order. 3) Sets function merge_vectors (v, w) in the following way: a) The functions look at the beginning of each vector and copies the smaller elements of the two elements to the resulting vector. b) Copies the remaining vector into the back of the resulting vector. c) Returns the constructed merged vector.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

double random (unsigned int &seed);
unsigned int seed = (unsigned int) time(0);
const int SIZE = 6;

void fill_vector (vector <int> & v, vector <int> & w);
void print_vector (vector <int> v);
void <int> merged_vectors (vector <int> v, vector <int> w);

int main()
{
    vector <int> v, w;
    vector <int> :: iterator beginning, ending;
    
    fill_vector (v, w);
    cout << "Vector v before sorting: " << endl;
    print_vector (v);
    cout << "Vector v after sorting: " << endl;
    beginning = v.begin();
    ending = v.end();
    sort (beginning, ending);
    print_vector(v);
    
    cout << "Vector w before sorting: " << endl;
    print_vector (w);
    cout << "Vector w after sorting: " << endl;
    beginning = w.begin();
    ending = w.end();
    sort (beginning, ending);
    print_vector(w);
    
    cout << "Merged vector: " << endl;
    print_vector (merged_vectors (v, w));
    return 0;
}

void fill_vector (vector <int> & v, vector <int> & w)
{
    for (int i = 0; i < SIZE; ++i)
    {
        v.push_back (int (100*random(seed)));
        w.push_back (int (100*random(seed)));
    }
}

void print_vector (vector <int> v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << setw(3) << v[i];
    cout << endl;
}

vector <int> merged_vectors (vector <int> v, vector <int> w)
{
    vector <int> temp;
    vector <int> :: iterator p = v.begin();
    vector <int> :: iterator q = w.begin();
    
    while (p != v.end() || q != w.end())
    {
        if (*p < *q || q == w.end())
        {
            temp.push_back(*p);
            ++p;
        }
        
        else
            if (*q <= *p || p == v.end())
            {   
                temp.push_back(*q);
                ++q;
            }
    }
    
    return temp;
}
    
double random (unsigned int & seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (MULTIPLIER*seed+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
