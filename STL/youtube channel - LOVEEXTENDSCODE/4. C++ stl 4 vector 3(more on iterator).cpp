/*/
https://www.youtube.com/watch?v=zfF4W7pK-_0&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=4
Stl 4 vector 3
Learnt : printing vector with the help of iterator
/*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector <int> vec;
    vector <int> :: iterator it;
    int i;
// double and char are written for only understanding

    vector <double> vec1;
    vector <double> :: iterator it2;
    it2 = vec1.begin();

    vector <char> vec3;
    vector <char> :: iterator it3;
    it3 = vec3.begin();

    for(i=1;i<=5;i++)
    {
        vec.push_back(i);
    }

    for(i=0;i<5;i++)
    {
        cout<<vec[i]<<"\t";
    }

    puts("\n\nprinting vector with the help of iterator \n");
    for(it = vec.begin();it != vec.end();it++)
    {
        cout<< *it <<endl;
    }

    return 0;
}


