/* 
Bubble Sort
Descending Order
*/

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void PrintArray(int *ar, int *s)
{
    int size = *s;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << "\n";
}

int main()
{
    bool b;
    int n, i, j, t, pass, cnt, move, size; //n = size, t = temporary variable  //number_of_comparison,number_of_swap;
    i = j = t = pass = cnt = move = size = 0;
    // pass = 1;
    int ID = 37;
    int ar[] = {28, 79, ID, 21, 71, 18, 34};
    // int ar[] = {5,1,4,2,8,9};
    size = sizeof(ar) / sizeof(ar[0]);

    cout << "Input: ";
    PrintArray(&ar[0], &size);
    cout << "Size of array: " << size << "\n";

    for (i = 0; i < size - 1; i++) //bubble sort
    {
        b = false;
        cnt = 0;
        for (j = 0; j < size - i - 1; j++)
        {

            if (ar[j] > ar[j + 1])
            {
                cnt += 1;
                swap(&ar[j], &ar[j + 1]);
                b = true;
                /* t = ar[j + 1];
                ar[j + 1] = ar[j];
                ar[j] = t; */
                PrintArray(&ar[0], &size);
            }
        }
        move += cnt;
        if (b == false)
        {
            break;
        }
        cout << "Pass: " << ++pass << "   ";
        cout << "Movements: " << cnt << "\n";
    }

    cout << "\nAfter Bubble Sort : ";
    PrintArray(&ar[0], &size);

    cout << "\nTotal number of passes: " << pass;
    cout << "\nTotal number of movements: " << move;
    return 0;
}