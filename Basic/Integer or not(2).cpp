#include<bits/stdc++.h>
#include <iostream>  
#include<sstream>

using namespace std;

int main()
{
    float n;

    cin>>n;
    float res= 360/(180-n);
    if( ceil(res) != res )
    {
        cout<<"Not Integer\n";
    }
    else
    {
        cout<<"Integer\n";
    } 

    return 0;
}