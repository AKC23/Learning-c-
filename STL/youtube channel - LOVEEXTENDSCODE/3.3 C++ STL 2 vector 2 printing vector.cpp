/*/
https://www.youtube.com/watch?v=WEwZpte_XB8&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=3
C++ STL: 2 vector 2
/*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

int main()
{

    vector <int> vec;
    int i;

    //take input
    for(i=0;i<3;i++)
    {
        vec.push_back(i);
    }

    //print the size of vector
    cout<<"Size of vector : ";
    cout<<vec.size()<<endl;

    //print the vector
    cout<<"Elements of vector : ";
    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}


