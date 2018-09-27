// Write a program that creates a dynamic structure with five linked integer nodes, pointed to by strcPtr head, and uses function insert_begin() to insert an integer structure at the beginning of the linked structure.

#include <iostream>
#include <iomanip>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

using namespace std; 

struct node;
typedef node *strcPtr;
void traverse_struct (strcPtr head);
strcPtr create_struct (int value);
void insert_begin (strcPtr&head, strcPtr s1);

struct node
{
    int data;
    strcPtr next;
};

int main()
{
    int i, value;
    strcPtr head, f2, f3, f4, f5;
    
    head = create_struct(0);
    f2 = create_struct(1);
    f3 = create_struct(2);
    f4 = create_struct(3);
    f5 = create_struct(4);
    
    head -> next = f2;
    f2 -> next = f3;
    f3 -> next = f4;
    f4 -> next = f5;
    
    traverse_struct(head);
    strcPtr start = create_struct(5);
    insert_begin (head, start);
    traverse_struct(head);
}

strcPtr create_struct (int value)
{
    strcPtr s1;
    s1 = new node;
    
    if (s1 != NULL)
    {
        s1 -> data = value;
        s1 -> next = NULL;
    }
}
    
void insert_begin (strcPtr&head, strcPtr s1)
{
    s1 -> next = head;
    head = s1;
}

void traverse_struct (strcPtr head)
{
    strcPtr s1 = head;
    int n = 0;
    
    while (s1 != NULL)
    {
        n++;
        cout << setw(3) << s1 -> data;
        s1 = s1 -> next;
    }
     
    cout << endl;
}
