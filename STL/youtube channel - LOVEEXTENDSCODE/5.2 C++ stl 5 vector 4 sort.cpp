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
    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout<< *it <<endl;
    }

    puts("\nsorting first n vector in ascending order \n");
    sort(vec.begin(), vec.begin()+3);                                   //only first n elements

    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout<< *it <<endl;
    }

    puts("\nsorting vector in ascending order \n");
    sort(vec.begin(), vec.end());

    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout<< *it <<endl;
    }

    puts("\nsorting vector in descending order \n");
    sort(vec.begin(), vec.end(),myfunc);

    for(it = vec.begin(); it != vec.end(); it++)
    {
        cout<< *it <<endl;
    }

    return 0;

}




