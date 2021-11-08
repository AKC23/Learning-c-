

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ID = 37;
    // int ar[7] = {28, 79, ID, 21, 71, 18, 34};
    int ar[] = {2,4,1,5,7,3};
    int i, j, item;
    i = j = item = 0;

    cout << "\nInput list is: ";

    for (int i = 0; i < 7; i++)
    {
        cout << ar[i] << " ";
    }

    for (i = 1; i < 7; i++)
    {
        item = ar[i];
        j = i - 1;
        while (j >= 0 && item < ar[j])
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = item;
    }

    cout << "\nSorted list: ";

    for (i = 0; i < 7; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
