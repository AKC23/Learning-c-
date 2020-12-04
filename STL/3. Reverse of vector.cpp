/**

Process 1
reverse(v.begin(), v.end());
reverse(v.begin() + 5, v.begin() + 8);

Process 2
vector<int>::reverse_iterator it;
it=vec.rbegin() ------- iterator pointing to vector’s reversly first (last) element
it=vec.rend() --------- iterator pointing to vector’s reversly last (first) element
*/

#include <bits/stdc++.h>
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector <int> v ;
    int i = 0;
    vector <int> :: iterator it;
    // Inserting elements in vector
    for (i = 0; i < 8; i++)
    {
        v.push_back(i+10);
    }

    cout<<"Output of v: ";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout <<"\nReverse of v: ";

    reverse(v.begin(), v.end());
    // Displaying elements of vector


    for (it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";

    vector <int> v1;
    vector<int>::reverse_iterator it1;

    for(i=1;i<10;i++)
    {
        v1.push_back(i);
    }

    cout<<"\nPrinting full v1:  ";
    for(it = v1.begin();it != v1.end(); it++)
    {
        cout<< *it << " ";
    }

    cout<<"\nThe last element is : "<<*v1.rbegin();

    cout << "\nReverse full v1: ";

    for(it1 = v1.rbegin(); it1 != v1.rend(); it1++)
    {
        cout<<*it1<<" ";
    }

    return 0;
}

