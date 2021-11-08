

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void PrintArray(int *ar, int *s)
{
    int size = *s;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}


void InsertionSort(int *ar, int *s)
{
    cout << "\nInsetion sort\n";
    int i, j, item, cnt, pass, move, size = *s;
    i = j = item = cnt = pass = move = 0;
    cout << "Input: ";
    PrintArray(&ar[0], &size);
    cout << "\nSize of array: " << size << "\n";

    for (i = 1; i < size; i++)
    {
        item = ar[i];
        j = i - 1;
        pass++;
        while (j >= 0 && item < ar[j])
        {
            ar[j + 1] = ar[j];
            j = j - 1;
            cnt++;
        }

        ar[j + 1] = item;
        cout << "Pass: " << pass << "   ";
        for (int i = 0; i < size; i++)
        {
            cout << ar[i] << " ";
        }
        cout << "  Move: " << cnt << "\t";
        move += cnt;
        cnt = 0;
        cout << "\n";
    }
    cout << "\nTotal number of passes: " << pass;
    cout << "\nTotal number of movements: " << move << "\n";
    cout << "\nOutput after Insertion sort: ";
    PrintArray(&ar[0], &(*s));
}

int main()
{
    int ID = 37;                                        //Give your ID here
    // int ar[] = {28, 79, ID, 21, 71, 18, 34};
    int ar[] = {2,4,1,5,7,3};
    // int ar[] = {77,33,44,11,88,22,66,55};
    // int ar[] = {7,7,7,7,7,7,7};

    int i, j, size;
    i = j = size = 0;
    size = sizeof(ar) / sizeof(ar[0]);

    InsertionSort(&ar[0], &size);                        //uncomment this line to show only insertion sort
    
    return 0;
}


/* 
Insetion sort
Input: 28 79 37 21 71 18 34 
Size of array: 7
Pass: 1   28 79 37 21 71 18 34   Move: 0
Pass: 2   28 37 79 21 71 18 34   Move: 1
Pass: 3   21 28 37 79 71 18 34   Move: 3
Pass: 4   21 28 37 71 79 18 34   Move: 1
Pass: 5   18 21 28 37 71 79 34   Move: 5
Pass: 6   18 21 28 34 37 71 79   Move: 3

Total number of passes: 6
Total number of movements: 13

Output after Insertion sort: 18 21 28 34 37 71 79

*/