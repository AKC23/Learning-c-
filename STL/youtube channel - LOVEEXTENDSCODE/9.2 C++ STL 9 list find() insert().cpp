/*/
https://www.youtube.com/watch?v=WIIHRBn9gOg&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=9
C++ STL 9 list find() insert()
Learnt : save array in a list and print it
use of find() and insert()

/*/

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
    int a[6] = {2,4,6,8,10,12};

    list <int> mlist(a,a+6);
    list <int> :: iterator it;

    printf("1st process\n");
    it = mlist.begin();                             //iterator is pointing to 2
    it++;                                           //iterator is pointing to 4
    printf("iterator is pointing to 4 :   ");
    cout<<*it<<endl;
    mlist.insert(it,55);                            //number 55 is added before 4
    cout<<endl<<*it;                          //always iterator points to 4
    for(it = mlist.begin(); it!=mlist.end();it++)
    {
        cout<<*it<<"\t";
    }

    printf("\n2nd process\n");
    printf("iterator is pointing to 10");

    it = find(mlist.begin(), mlist.end(),10);       //iterator is pointing to 10
    it++;                                           //iterator is pointing to 12
    cout<<endl<<*it<<endl;                          //always iterator points to 12
    mlist.insert(it,102);                           //number 102 is added before 12
    cout<<endl<<*it<<endl;
    for(it = mlist.begin(); it!=mlist.end();it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}