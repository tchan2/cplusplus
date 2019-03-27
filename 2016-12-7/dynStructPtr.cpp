// Tammy Chan
// Write a program that creates a dynamic structure pointed to by
// structure_pointer head with only one data field of name
// int_data. Create five random integers that should be inserted into
// the dynamic structure as follows: 1) Insert the first integer into
// the structure node pointed to by head. 2) Insert the second number
// into the structure node pointed to by the left pointer (left_ptr)
// if the inserted number is less than five, and into the right
// pointer if the number is greater or equal to 5. 3) Continue the
// insertion process for five random integers.

#include <iostream>
#include <iomanip>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

using namespace std;

double random (unsigned int &seed);
struct node;
const int SIZE = 5;
node *newNode (int value);
unsigned int seed = (unsigned int) time(0);
typedef node *node_pointer;
void create_structure (node_pointer head, int size);
void insert (node_pointer node, int value);

struct node
{
    int value;
    node_pointer left_ptr, right_ptr;
};

int main()
{
    node_pointer head;
    cout << "Structure is: ";
    cout << endl;
    create_structure (head, 5);
    return 0;
}

node_pointer get_structure (int value)
{
    node_pointer s1;
    s1 = new node;
    if (s1 != NULL)
    {
	s1 -> left_ptr = NULL;
	s1 -> value = value;
	s1 -> right_ptr = NULL;
    }
    return s1;
}
  

void create_structure (node_pointer head, int size)
{
    int value = 11*random(seed);
    head = get_structure(value);
    if (size > 0)
    {
	if (head -> value < 5)
	{
	    head -> left_ptr = get_structure (head -> value);
	    cout << setw(3) << left << head -> value << endl;
	}
	else
	{
	    if (head -> value >= 5)
		head -> right_ptr = get_structure (head -> value);
	    cout << setw(3) << right << head -> value << endl;
	}
    create_structure (head, size-1);
    }
}
    
double random (unsigned int &seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed)+INCREMENT)%MODULUS;
    return double(seed)/double(MODULUS);
}
    
/*void insert (node_pointer node, int value)
{
    value = int (11*random(seed));
    if (node == NULL)
    {
	node = newNode (value);
	return;
    }
    if (node -> int_data > 5)
	insert (node -> left_ptr, value);
    else
	insert (node -> right_ptr, value);
}
*/

