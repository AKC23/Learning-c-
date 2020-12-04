/*/
https://www.youtube.com/watch?v=WEwZpte_XB8&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=3
C++ STL: 2 vector 2
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

    vector <double> vec1;
    vector <double> :: iterator it2;
    it2 = vec1.begin();

    vector <char> vec3;
    vector <double> :: iterator it3;
    it3 = vec3.begin();

    for(i=0;i<5;i++)
    {
        vec.push_back(i);
    }

    for(i=0;i<5;i++)
    {
        cout<<vec[i]<<"\t";
    }

    puts(" ");
    it = vec.begin();
    cout<<*it<<endl;            //will print the first element of vector

    vec1.push_back(11);
    it2 = vec1.begin();         //will take the first element of vector
    cout<<*it2<<endl;

}


