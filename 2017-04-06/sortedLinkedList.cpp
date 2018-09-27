sortedLinkedList :: sortedLinkedList()
{
    anchorPtr = NULL;
    numOfElements = 0;
}

bool sortedLinkedList :: insertSorted(string n, string o)
{
    struct nameDirType *prevPtr, *searchPtr, *newDataPtr;
    bool rc;
    
    rc = false;
    
    newDataPtr = new nameDirType;
    if (newDataPtr != NULL)
    {
        newDataPtr -> name = n; 
        newDataPtr -> occupation = o; 
        newDataPtr -> next = NULL; 
    }
    
    if (anchorPtr == NULL)
    {
        anchorPtr = newDataPtr;
        numOfElements++;
        rc = true;
    }
    
    else
    {
        prevPtr = NULL;
        searchPtr = anchorPtr;
        
        while (searchPtr != NULL && searchPtr -> name < n)
        {
            prevPtr = searchPtr;
            searchPtr = searchPtr -> next;
        }
        
        if (searchPtr == NULL)
        {
            prevPtr -> next = newDataPtr;
        }
        
        else if (prevPtr == NULL)
        {
            anchorPtr = newDataPtr;
            newDataPtr -> next = searchPtr;
        }
        
        else
        {
            prevPtr -> next = newDataPtr;
            newDataPtr -> next = searchPtr;
        }
        
        numOfElements++;
        rc = true;
    }
    else
    {
        cout << "Error!" << endl;
    }
    
    return rc;
}

void sortedLinkedList :: displaySortedList()
{
    struct nameDirType *dspPtr;
    int counter = 1;
    dspPtr = anchorPtr;
    
    cout << endl << "----Sorted Student Directory----" << endl;
    while (dspPtr != NULL)
    {
        cout << counter << ") " << dspPtr -> name;
        cout << " " << dspPtr -> occupation << endl;
        counter++;
        
        dspPtr = dspPtr -> next;
    }
    
    cout << endl << endl;
}

bool sortedLinkedList :: isEmpty()
{
    bool answer;
    
    if (numOfElements == 0)
        answer = true;
    else
        answer = false;
    return answer;
}

void sortedLinkedList :: deleteSorted()
{
    nodetype *current, *start, **previous;
    int n;
    
    previous = start;
    current = start;
    
    while ((current != NULL) && (n != current -> data))
    {
        previous = &current -> ptr;
        current = current -> ptr;
    }
    
    if (current != NULL)
    {
        *previous = current -> ptr;
        delete current;
    }
    return;
}
