/* 
Binary Search in C++
*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    bool b = false;
    int array[] = {1, 4, 7, 9, 11, 17, 20};
    int x, low,mid,high,n;
    x = low = mid = high = n = 0;
    x = 12;
    n = sizeof(array) / sizeof(array[0]);
    
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = floor( (high + low) / 2 );
        // cout<<"Mid: "<<mid<<"\n";
        if (array[mid] == x)
        {
            b = true;
            break;
        }    
        if (array[mid] < x)
        {
            low = mid + 1;
        }    
        else
        {
            high = mid - 1;
        }
    }
    
    if (b == false)
        printf("\nNot found");
    else
        printf("\nElement is found at index %d", mid);
}
