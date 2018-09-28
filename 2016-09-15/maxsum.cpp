// Write a program that accepts an unknown number of integers from the keyboard and outputs their sum and the largest integer entered. 
// You must not use arrays, for loops, nor breaks.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>

using namespace std;

int main()
{   
    int sum;
    int input;
    int maximum = INT_MIN;
    
    cout << "Enter numbers: ";
    
    while (cin >> input)
    {
        cout << input << " " << endl;
        sum = sum + input;
        if (input > maximum)
            maximum = input;
    }
    
    cout << "The sum of all the numbers is: " << sum << endl;
    cout << "The largest integer is: " << maximum << endl;
}    
