#include <iostream>
#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main()
{
    int myarray[10] = {12, 4, 3, 1, 15, 45, 33, 21, 10, 2};
    int i, j, t;
    i = j = t = 0;

    cout << "\nInput list is \n";

    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << " ";
    }
    cout << "\n";

    //12,4,3,1,15,45,33,21,10,2
    for (i = 1; i < 10; i++)
    {
        t = myarray[i];
        j = i - 1;
        // cout << " t: " << t << " j: " << j;
        while (t <= myarray[j])
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = t;
        // cout << " j: " << j << " myarray[j+1]: " << myarray[j + 1] << "\n";
    }

    cout << "\nSorted list is \n";

    for (i = 0; i < 10; i++)
    {
        cout << myarray[i] << " ";
    }

}
