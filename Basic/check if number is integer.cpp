
#include<bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n2;
    float n1;
    n1 = n2 = 0;
    cin>>n1;
    n2 = int(n1); 

    cout<<n1<<endl<<n2;
    
    if(n1==n2)
    {
        cout<<"Integer";
    }
    else
    {
        cout<<"Not integer";
    }
    
    return 0;
}
