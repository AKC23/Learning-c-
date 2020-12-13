/*/
https://www.youtube.com/watch?v=WIIHRBn9gOg&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=9
C++ STL 9 list find() insert()

Learnt : save array in a list and print it
use of find() and insert()
/*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>                     //need to include this function to use find() function
#include<string>
#include<list>
#include<queue>

using namespace std;

int main()
{
    int ar[5] = {5,2,1,6,3};

    //array to list
    list <int> mylist (ar,ar+5);                        //(first element , last + 1 element) or (ar+0,ar+5)
    list <int> :: iterator it;

    it = mylist.begin();                                //iterator is pointing to first element
    it++;
    cout<<"First element of list or array: "<<*it<<endl;
    mylist.insert(it,7);                                //insert element after first element
    cout<<"Though iterator has inserted 7 in second position but it is still pointing to 2\n";     //always iterator point to 2
    cout<<"Cause it: "<<*it<<endl;                      //always iterator point to 2
    
    cout<<"All of the elements:   ";
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"  ";
    }
    
    printf("\nInsert element after the element '6'\n");
    it = find(mylist.begin(),mylist.end(),3);                   //iterator is finding 3 now
    cout<<"Iterator is pointing to 3:     "<<*it<<endl;         //always iterator points to 3
    mylist.insert(it,0);                                        //insert element after the pointing element
    cout<<"Iterator is still pointing to 3:    "<<*it<<endl;    //always iterator points to 3
    cout<<"All of the elements:   ";
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<"   ";
    }
    cout<<"\n";

}
