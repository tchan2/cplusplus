// Write a program that uses the two functions discussed in class to create a "2D" vector that outputs the rows of that vector that have minimum sums.

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
}

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
