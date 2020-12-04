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
    vector <int> vec (5, -2);           //vec(size, elements)
    vec.push_back(11);                  //for new element

    int i;

    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";              //-2 -2 -2 -2 -2
    }

}
