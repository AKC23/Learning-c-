/**
https://www.youtube.com/watch?v=M390yEnX7TU&list=PLgLCjVh3O6Sgux985GYG22xkFt9z9Sq0_&index=17&ab_channel=LoveExtendsCode
Date: Friday, December 18, 2020  
// Note that by default C++ creates a max-heap for priority queue
*/

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cmath>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    //queue for integer (Works in descending order)    
    priority_queue <int> q;
    int x;
    q.push(800);
    q.push(40);
    q.push(100);
    q.push(300);
    q.push(50);

    cout<<"Printing elements of queue in an descending order\n";
    while(!q.empty())
    {
        x = q.top();
        cout<<x<<" ";
        // cout<<q.top()<<" ";                                              //same process
        q.pop();
    }        

    //queue for string (Works in descending order)
    cout<<"queue for string\n";
    priority_queue <string> q2;
    string x2;
    q2.push("dipta");
    q2.push("razin");
    q2.push("abc");
    q2.push("code");
    q2.push("kelly");
    //capital letters
    q2.push("Jelly");
    q2.push("Molly");

    cout<<"Printing elements of queue in an descending order\n";
    while(!q2.empty())
    {
        x2 = q2.top();
        cout<<x2<<" ";
        q2.pop();
    }        

    return 0;
}
