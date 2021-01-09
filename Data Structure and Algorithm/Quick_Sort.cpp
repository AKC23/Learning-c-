/* 
Quick Sort
*/
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Quick_Sort(vector<int> &x, int start, int end)
{
    int i, j;

    if (start < end)
    {
        i = start + 1;
        j = end;
        while (x[i] <= x[start])
        {
            i = i + 1;                                      //increasing i
        }
        while (x[j] > x[start])
        {
            j = j - 1;                                      //Decreasing j
        }
        while (i < j)
        {
            swap(x[i], x[j]);
            while (x[i] < x[start])
            {
                i = i + 1;
            }
            while (x[j] > x[start])
            {
                j = j - 1;
            }
        }
        swap(x[j], x[start]);
        Quick_Sort(x, start, j - 1);
        Quick_Sort(x, j + 1, end);
    }
}

int main()
{

    //vector<int> v1 = {7, 3, 1, 9, 11, 4, 5, 15, 14};
    int i, size, input;
    vector<int> v1;
    cout << "Size of vector: ";
    cin >> size;
    cout << "Give input: ";
    for (i = 0; i < size; i++)
    {
        cin >> input;
        v1.push_back(input);
    }

    Quick_Sort(v1, 0, v1.size() - 1);
    cout << "Sorted array: ";
    for (i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}
