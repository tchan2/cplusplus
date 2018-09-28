#include <iostream>
#include <iomanip>
#include <stdio.h>

void use_comb (int a[], int n, int r, int index, int temp[]. int i);

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(a)/sizeof(a[0]);
    
    print_comb (a, n, r);
    return 0;
}

void print_comb (int a[], int n, int r)
{
    int temp[r];
    use_comb (a, n, r, 0, temp, 0);
}

void use_comb (int a[], int n, int r, int index, int temp[], int i]
{
    if (index == r)
    {
        for (int j = 0; j < r; ++j)
            cout << " " << temp[j];
        cout << "\n";
        return;
    }
    
    if (i >= n)
        return;
    temp[index] = a[i];
    use_comb (a, n, r, index+1, temp, i+1);
    use_comb (a, n, r, index, temp, i+1);
}
