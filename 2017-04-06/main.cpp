#include <iostream>
#include "sortedLinkedList.h"
#include "sortedLinkedList.cpp"

using namespace std;

int main()
{
    bool done;
    int choice;
    string sname, soccupation;
    sortedLinkedList studentDir;
    
    done = false;
    while (done == false)
    {
        cout << " 1) Insert new student." << endl;
        cout << " 2) Delete student." << endl;
        cout << " 3) Exit." << endl;
        cout << "Enter a selection: ";
        cin >> choice;
        
        switch (choice)
        {
            case 1: 
                cout << "Enter student's name: ";
                cin >> sname;
                cout << "Enter student's occupation: ";
                cin >> soccupation;
            
                if (studentDir.insertSorted (sname, soccupation))
                    cout << "Insert was done!" << endl;
                else
                    cout << "Error! Insert was not done!" <<endl;
                
                studentDir.displaySortedList();
            break;
            
            case 2:
                cout << "Enter the number you'd like to delete: " << endl;
                cin >> n;
                
                if (studentDir.deleteSorted(&node, n))
                    cout << "Removal was done!" << endl;
                else
                    cout << "Error! Removal was not done!" << endl;
                studentDir.displaySortedLIst();
            break;
            
            case 3:
                done = true;
                break;
                
            default:
                cout << "Sorry! Invalid choice was made!" << endl;
            break;
            }
      }
      return 0;
 }
