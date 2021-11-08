/* 
C++ program for Merge Sort
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(vector<int> &vec, int size)
{  
    for (int i = 0; i < size;i++)
        cout << vec[i] <<" ";
    
    cout << "\n";
}


void Merge(vector<int> &x, int l, int mid, int r)
{
    int i, j, k;
    // Merges two subarrays of arr[]. First subarray is arr[l..m]. Second subarray is arr[m+1..r]
    int size_left = mid - l + 1;
    int size_right = r - mid;
    // Create temp arrays
    vector<int> Left_vector(size_left);
    vector<int> Right_vector(size_right);
    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < size_left; i++)
    {
        Left_vector[i] = x[l + i];
    }
    for (j = 0; j < size_right; j++)
    {
        Right_vector[j] = x[mid + 1 + j];
    }

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    while (i < size_left && j < size_right)
    {
        if (Left_vector[i] <= Right_vector[j])
        {
            x[k] = Left_vector[i];
            i++;
        }
        else
        {
            x[k] = Right_vector[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of L[], if there are any
    while (i < size_left)
    {
        x[k] = Left_vector[i];
        cout<<" At loop 2.1, x[k]: "<<x[k]<<"\n";
        i++;
        k++;
    
    }
    // Copy the remaining elements of R[], if there are any
    while (j < size_right)
    {
        x[k] = Right_vector[j];
        j++;
        k++;
    }
}

// l is for left index and r is right index of the sub-array of arr to be sorted
void Merge_Sort(vector<int> &x, int left, int right)
{
    int middle;
    if (left < right)
    {
        middle = (left + right - 1) / 2;

        Merge_Sort(x, left, middle);
        Merge_Sort(x, middle + 1, right);
        Merge(x, left, middle, right);
    }
}

int main()
{
    int i, size, input;
    // vector<int> vec = {5,2,4,1,7,3,0,-2};
    vector<int> vec = {38, 27, 43, 3, 9, 81, 10, 5};
    cout << "Given array: ";
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
    Merge_Sort(vec, 0, vec.size() - 1);

    size = vec.size();

    cout << "After Merge sort: ";
    Print(vec, size);

    return 0;
}
