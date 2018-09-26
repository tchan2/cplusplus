// Tammy Chan
// Complete the implementation of the class LinkedSortedList, and write a driver program to test it.

// sortedLinkedList.h

struct nameDirType
{
    string name;
    string occupation;
    struct nameDirType *next;
};

nodetype (int v, nodetype *p)
{
    int data;
    data = value;
    ptr = p;
};

class sortedLinkedLIst
{
    public:
        sortedLinkedList();
        bool insertSorted(string, string);
        bool isEmpty();
        void displaySortedLIst();
        void deleteSorted();
        
    private:
        struct nameDirType *anchorPtr;
        nodetype *ptr;
        int numOfElements;
};
