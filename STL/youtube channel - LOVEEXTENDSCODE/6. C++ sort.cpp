/*/
https://www.youtube.com/watch?v=13N1gcLVNSQ&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=6
C++ STL: sort()
learnt : Sorting, ascending and descending order
/*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>     //used to sort elements

using namespace std;

int main()
{
    int i;
    int ar[5] = {6,2,1,3,5};
    int ar2[5] = {8,7,10,9,13};

    printf("\nElements of ar\n");
    for(i=0; i<5; i++)
    {
        cout<< ar[i] <<"\t";
    }

    printf("\nElements of ar2\n");
    for(i=0; i<5; i++)
    {
        cout<< ar2[i] <<"\t";
    }

    puts("\nsorting n elements of ar2 in ascending order ");
    sort(ar2 +2, ar2 +5);                                   //only first n elements
//    sort(&ar2[2], &ar2[5]);
    //can be written as sort(&ar2[2], &ar2[5])

    for(i=0; i<5; i++)
    {
        cout<< ar2[i] <<"\t";
    }

    puts("\nsorting first n elements of ar in ascending order ");
    sort(&ar[0], ar+4);            //only first n elements

    for(i=0; i<5; i++)
    {
        cout<< ar[i] <<"\t";
    }

    puts("\nSorting all elements of ar in ascending order ");
    sort(ar, ar+5);
    for(i=0; i<5; i++)
    {
        cout<< ar[i] <<"\t";
    }


    return 0;

}





