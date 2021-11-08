// C++ program to check if an Array is sorted or not
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if array is sorted in non-decreasing order.
bool arraySortedOrNot(int arr[], int n)
{
    bool flag = 1;
    if (n == 0 || n == 1) // Array has one or no element
        return flag;      //flag = 1 as the array is sorted

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1]) // Unsorted pair found
        {
            flag = 0;
            return flag;
        }
    }
    return flag; // No unsorted pair found and flag = 1
}

int main()
{
    int arr[] = {12, 13, 23, 45, 78, 88};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is not sorted\n";
}
