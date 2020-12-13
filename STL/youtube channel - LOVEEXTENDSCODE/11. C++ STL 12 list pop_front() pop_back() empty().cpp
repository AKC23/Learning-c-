/*
https://www.youtube.com/watch?v=NcaV1awy5X8&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=12
C++ STL: 12 list pop_front() pop_back() empty()
Learnt : use of list, pop_front(), pop_back(), empty()
lst.front() ------------ returns list’s first element
lst.back()  ------------ returns list’s last element

lst.pop_front() -------- remove list’s first element
lst.pop_back()  -------- remove list’s last element

*/
#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<algorithm>
#include<list>
#include<queue>

using namespace std;

int main()
{
    int ar[5] = {5,2,1,6,3};

    list <int> mlist(ar,ar+5);                  //the list is full
    list <int> :: iterator it;
    
    printf("\nPrinting the whole list\n");
    for(it = mlist.begin(); it!=mlist.end(); it++)
    {
        cout<<*it<<"\t";
    }

    if(mlist.empty())
    {
        cout<<"\nmlist is : "<<"EMPTY";
    }
    else
    {
        cout<<"\nmlist is : "<<"FILLED";
    }

    list <int> mlist23;                         //the list is empty
    if(mlist23.empty())
    {
        cout<<"\nmlist23 is : "<<"\nEMPTY";
    }
    else
    {
        cout<<"\nmlist23 is : "<<"\nFILLED";
    }

    cout<<"\nPrinting the first element of the list: "<<mlist.front();
    cout<<"\nPrinting the last element of the list: "<<mlist.back();


    printf("\nAfter removing the element\n");
    mlist.pop_front();                          //removing the first element
    mlist.pop_back();                           //removing the last element
    mlist.pop_front();
    mlist.pop_back();

    for(it = mlist.begin(); it!=mlist.end(); it++)
    {
        cout<<*it<<"\t";
    }

}
