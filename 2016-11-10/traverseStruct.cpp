// Tammy Chan
// Write a program that creates a linked structure of nodes with fields
// int and structure pointer and uses a recursive function
// traverse_structure to print the int fields. Pointers must be used
// for the creation of the structure, and in function traverse_structure.

#include <iostream>
#include <iomanip>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

using namespace std;

struct node;
typedef node *node_pointer;
node *newNode (int value);
const int SIZE = 10;
void traverse_structure (node *start);

struct node
{
    structure_pointer int_data;
};

int main ()
{
    int i;
    node *head = n;
    node *currentNode = head;
    for (i = 1; i < SIZE; ++i)
    {
	currentNode -> f2 = newNode(i);
	currentNode = currentNode -> f2;
    }
    cout << "Int fields: ";
    traverse_structure (head);
    cout << endl;
    return 0;
}

node *newNode (int value)
{
    node *temp = new node;
    temp -> f1 = v;
    temp -> f2 = NULL;
    return temp;
}
		
void traverse_structure (node *start)
{
    if (start != NULL)
    {
	cout << start -> f1 << " ";
	traverse_structure (start -> f2);
    }
}
