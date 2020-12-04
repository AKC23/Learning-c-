/*/
https://www.youtube.com/watch?v=WEwZpte_XB8&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=3
C++ STL: 2 vector 2
Learnt : printing vector by loop
/*/

#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;            //data type-> vector <int> :: iterator
    int i;

    for(i=0;i<5;i++)
    {
        vec.push_back(i);
    }

    printf("\nPrinting vector with the help of i : ");
    for(i=0;i<5;i++)
    {
        cout<<vec[i]<<"\t";
    }

    printf("\n\nPrinting vector with the help of iterator : ");
    for(it = vec.begin();it < vec.end();it++)                       //it != vec.end() is same as it < vec.end()
    {
        cout<<*it<<"\t";
    }

    puts(" ");
    it = vec.begin();
    cout<<"Printing 1st vector by Iterator : "<<*it<<endl;          //will print the first element of vector
    it++;
    cout<<"Printing 2nd vector by Iterator : "<<*it<<endl;          //will print the second element of vector
}

