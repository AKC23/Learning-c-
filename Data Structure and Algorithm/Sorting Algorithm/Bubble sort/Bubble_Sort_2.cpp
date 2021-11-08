/* 
Bubble Sort
Ascending Order
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool b;
    int n, i, j, t; //n = size, t = temporary variable
    n = i = j = t = 0;
    cout << "Size of array: ";
    cin >> n; //input n(size)
    int ar[n];
    cout << "Give input in array: ";
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (i = 0; i < n; i++) //bubble sort
    {
        b = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                b = true;
                t = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = t;
            }
        }
        if (b == false)
        {
            break;
        }
    }

    cout << "After Bubble Sort\nOutput of array: ";
    for (i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}