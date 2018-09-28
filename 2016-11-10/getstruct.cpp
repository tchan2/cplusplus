// Create a function get_structure that assigns given values to the fields of the structure.

#include <iostream>
#include <iomanip>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>

using namespace std;

struct structure;
typedef structure *structure_ptr;
structure_ptr get_structure (int n, char ch);

struct structure
{
    int f1;
    char f2;
    structure_ptr f3, f4;
};

int main()
{
    int n;
    char ch;
    get_structure (n, ch);
    return 0;
}

structure_ptr get_structure (int n, char ch)
{
    structure_ptr s1;
    s1 = new structure;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Enter a character: ";
    cin >> ch;
    
    if (s1 != NULL)
    {
        s1 -> f1 = n;
        s1 -> f2 = ch;
        s1 -> f3 = NULL;
        s1 -> f4 = NULL;
    }
    
    else
        cout << "No dynamic memory available. " << endl;
    cout << "s1 -> f1 = " << s1 -> f1 << " s1 -> f2 = " << s1 -> f2 << endl;
    cout << "s1 -> f3 = " << s1 -> f3 << " s1 -> f4 = " << s1 -> f4 << endl;
}
