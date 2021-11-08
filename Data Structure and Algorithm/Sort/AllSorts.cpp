/* 
Pass and movement of Bubble and insertion sort
 */
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void PrintArray(int *ar, int *s);
void InsertionSort(int *ar, int *s);

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void InsertionSort(int *ar, int *s)
{
    cout << "\nInsetion sort\n";
    int i, j, item, cnt, pass, move, size = *s;
    i = j = item = cnt = pass = 0;
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

void BubbleSort(int *ar, int *s)
{
    cout << "\nBubble sort\n";
    bool b;
    int i, j, t, cnt, pass, move, size = *s;
    i = j = t = pass = cnt = move = 0;

    cout << "Input: ";
    PrintArray(&ar[0], &size);
    cout << "\nSize of array: " << size << "\n\n";

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
                cout << "\n";
            }
        }
        move += cnt;
        if (b == false)
        {
            break;
        }
        pass = i+1;
        cout << "Pass: " << pass << "\t";
        cout << "Movements: " << cnt << "\n\n";
    }
    // cout << "\nAfter Bubble Sort: ";
    // PrintArray(&ar[0], &size);

    cout << "\nTotal number of passes: " << pass;
    cout << "\nTotal number of movements: " << move << "\n";
    cout << "Output after Bubble sort: ";
    PrintArray(&ar[0], &(*s));
}


void SelectionSort(int *ar, int *s)
{
    cout << "\nSelection sort\n";

    int n, i, j, temp, Min_loc,pass,move,cnt,size = *s;                                             //n = size
    n = i = j = temp = Min_loc = pass = move = cnt = 0;
    cout << "Input: ";
    PrintArray(&ar[0], &size);
    cout << "\nSize of array: " << size << "\n";

    for(i=0;i<size-1;i++)
    {
        Min_loc = i;  
        cnt = 0;
        for(j=i+1;j<size;j++)
        {
            if(ar[j] < ar[Min_loc])
            {   
                Min_loc = j;
            }

        }
        
        if(Min_loc != i)
        {
            cnt = Min_loc - i;
            temp = ar[i];
            ar[i] = ar[Min_loc];
            ar[Min_loc] = temp;
        }
        pass = i+1;
        cout << "Pass: " << pass <<"    ";
        PrintArray(&ar[0], &size);

        cout << "  Move: " << cnt << "\t";
        move += cnt;
        cout<<"\n";
    }

    cout << "\nTotal number of passes: " << pass;
    cout << "\nTotal number of movements: " << move << "\n";
    cout << "\nOutput after Selection sort: ";
    PrintArray(&ar[0], &(*s));
    cout<<"\n";
}


void PrintArray(int *ar, int *s)
{
    int size = *s;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
}

int main()
{
    int ID = 141;                                        //Give your ID here
    // int ar[] = {28, 79, ID, 21, 71, 18, 34};
    int ar[] = {2,4,1,5,7,3};
    // int ar[] = {77,33,44,11,88,22,66,55};
    // int ar[] = {7,7,7,7,7,7,7};

    int i, j, size;
    i = j = size = 0;
    size = sizeof(ar) / sizeof(ar[0]);
    /* cout << "\nInput list: ";

    PrintArray(&ar[0], &size); */

    InsertionSort(&ar[0], &size);                        //uncomment this line to show only insertion sort
    // BubbleSort(&ar[0], &size);                           //uncomment this line to show only bubble sort
    // SelectionSort(&ar[0], &size);                           //uncomment this line to show only selection sort
    
    // PrintArray(&ar[0], &size);

    return 0;
}
/* 
int ar[] = {28,79,37,21,71,18,34};
int ar[] = {28, 79, ID, 21, 71, 18, 34};
int ar[] = {2,4,1,5,7,3};
int ar[] = {77,33,44,11,88,22,66,55};
int ar[] = {7,7,7,7,7,7,7};


 */