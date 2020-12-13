/*/
C++ STL 16 Stack
Learnt : use of stack, input and print the elements
**Can't use iterator in stack
/*/

#include<iostream>
#include<stdio.h>
#include<stack>
// #include<iterator>               can't use iterator in stack

using namespace std;

int main()
{
    stack <string> s;

    s.push("dipta");
    s.push("nabil");
    s.push("arnob");

//  printing one element of stack
    cout<<s.top()<<endl;

    puts("After removing the top element in stack \nNow the top element is: ");
    s.pop();                                                //removing the top element in stack
    cout<<s.top()<<endl;

//  printing all the elements of stack
    stack <string> s2;

    s2.push("jamil");
    s2.push("kabil");
    s2.push("mamun");

    string x;
    puts("Printing the elements of stack 2");
    while(!s2.empty())
    {
        x = s2.top();                                       //assigning the top element in x
        cout<<x<<endl;
        s2.pop();                                           //removing the top element
    }

    return 0;
}
