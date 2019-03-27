// Write a program that uses the two functions discussed in class to create a "2D" vector that outputs the rows of that vector that have 
// minimum sums.

#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>
#include <limits.h>
#include <algorithm>

using namespace std;

struct vector_node
{
    int sum;
    vector <int> row_vector;
};

double random (unsigned int &seed);
unsigned int seed = (unsigned) time (0);
void fill_vector (vector <vector_node> & v, int & min_sum);
void print_vector (vector <vector_node> v, int min_sum);

int main()
{
    int min_sum;
    vector <vector_node> v;
    fill_vector (v, min_sum);
    print_vector (v, min_sum);
    return 0;
}

void fill_vector (vector <vector_node> & v , int & min_sum)
{  
    int new_integer, node_vector_size;
    int vector_size = int (1+10*random(seed));
    vector_node v_n;
    
    if (vector_size > 0)
    {
        min_sum = INT_MAX;
        for (int row = 0; row < vector_size; ++row)
        {
            node_vector_size = int (1+10*random(seed));
            v_n.sum = 0;
            
            for (int col = 0; col < node_vector_size; ++col)
            {
                new_integer = int (10*random(seed));
                v_n.row_vector.push_back (new_integer);
                v_n.sum += new_integer;
            }
            
            v.push_back (v_n);
            v_n.row_vector.clear();
            if (v[row].sum < min_sum)
                min_sum = v[row].sum;
        }
    }
    else
        cout << "Created vector is empty!" << endl;
}

void print_vector (vector <vector_node> v, int min_sum)
{
    cout << "Vector v is: " << endl;
    for (int row = 0; row < v.size(); ++row)
    {
        cout << "Sum" << setw(3) << v[row].sum;
        cout << "   : ";
        for (int col = 0; col < v[row].row_vector.size(); ++col)
            cout << setw(3) << v[row].row_vector[col];
        cout << endl;
    }
    cout << "Smallest: " << setw(3) << min_sum << endl;
}

double random (unsigned int & seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (MULTIPLIER*seed+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
