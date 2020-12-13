/*/
C++ STL 15 Set
Learnt : use of set,use of iterator and pair in set(),
can't use iterator in stack
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

    puts("After removing the top element in stack");
    s.pop();                                                //removing the top element in stack
    cout<<s.top()<<endl;




//  printing all the elements of stack
    stack <string> s2;

    s2.push("jamil");
    s2.push("kabil");
    s2.push("mamun");

    string x;
    puts("\n\nPrinting the elements of stack 2");
    while(!s2.empty())
    {
        x = s2.top();
        cout<<x<<endl;
        s2.pop();
    }

    return 0;
}
