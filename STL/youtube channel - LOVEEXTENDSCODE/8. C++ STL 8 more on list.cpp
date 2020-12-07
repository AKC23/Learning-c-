
/*/
https://www.youtube.com/watch?v=vNlYk9t-InI&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=8
C++ Stl 8 : more on list
Learnt : we can use only push.back() in vector but we can push.back() and push.font() in list
/*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<list>
#include<queue>
#include<iterator>

using namespace std;

int main()
{

    list <float> mylist;
    list <float> :: iterator it;

    mylist.push_back(10);
    mylist.push_back(11);
    mylist.push_front(24);
    mylist.push_front(28);
    mylist.push_back(-3);

    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<"\t";
    }

    printf("Size of the list");
    cout<<endl<<mylist.size()<<endl;

    mylist.reverse();
    printf("\nReverse the list\n");
    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<"\t";
    }

    printf("\nclear the list\n");
    mylist.clear();
    cout<<mylist.size()<<endl;
    for(it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<<*it<<"\t";
    }

    return 0;
}
