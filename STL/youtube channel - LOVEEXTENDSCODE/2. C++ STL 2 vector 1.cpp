/*/
https://www.youtube.com/watch?v=thC4qSvywPg&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=2
C++ STL: 2 vector 1
Learnt : printing vector and array
/*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>            //for vector

using namespace std;

int main()
{
    int array[3];

    array[0]= 34;
    array[1] = 10;
    array[2] = 22;

    vector <int> vec;
    vec.push_back(34);      //vec[0] = 34
    vec.push_back(10);      //vec[1] = 10
    vec.push_back(22);      //vec[2] = 22

    cout<<vec[0]<<endl;
    cout<<array[0]<<endl;
    //change any element of vec[]
    vec[1] = 55;
    printf("%d",vec[1]);

    return 0;
}
