/**
https://www.youtube.com/watch?v=8Ga-vtsMM6o&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=5
C++ STL: 5 vector 4
learnt : ascending and descending order
*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>                 //used to sort elements

bool myfunc(int a, int b)
{
    return (a>b);
}

using namespace std;


int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int i;

    vec.push_back(10);
    vec.push_back(432);
    vec.push_back(32);
    vec.push_back(52);
    vec.push_back(12);
    vec.push_back(50);

    printf("\nElements of vector\n");
    for(it = vec.begin();it != vec.end();it++)
    {
        cout<< *it <<" ";
    }

    sort(vec.begin(), vec.end());                               //sorting in ascending order

    puts("\nprinting vectors in ascending order ");
    for(it = vec.begin();it != vec.end();it++)
    {
        cout<< *it <<" ";
    }

    sort(vec.begin(), vec.end(),myfunc);
    puts("\nprinting vectors in descending order ");

    for(it = vec.begin();it != vec.end();it++)
    {
        cout<< *it <<" ";
    }

    return 0;

}



