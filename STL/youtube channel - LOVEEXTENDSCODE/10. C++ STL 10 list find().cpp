/*
https://www.youtube.com/watch?v=WIIHRBn9gOg&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=9
C++ STL: 10 list find
Learnt : use of find(),erase() and check the element is in the list or not
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
    int ar[5] = {5,22,1,6,3};

    list <int> mlist(ar,ar+5);
    list <int> :: iterator it;

    printf("printing all the elements :\t");
    for(it=mlist.begin();it!=mlist.end();it++)
    {
        cout<<*it<<"\t";
    }

    printf("\nAfter erasing first element\n");
    it = mlist.begin();
    mlist.erase(it);                            //erasing the first element
    for(it=mlist.begin();it!=mlist.end();it++)
    {
        cout<<*it<<"\t";
    }

    printf("\nAfter erasing any indicated element\n");
    it = find(mlist.begin(),mlist.end(),6);     //erasing the indicated element
    mlist.erase(it);
    for(it=mlist.begin();it!=mlist.end();it++)
    {
        cout<<*it<<"\t";
    }

    printf("\n\nChecking if the element is in the list or not\n");
    it = find(mlist.begin(),mlist.end(),22);

    if(it == mlist.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
    printf("\n\n\n");

    return 0;
}
