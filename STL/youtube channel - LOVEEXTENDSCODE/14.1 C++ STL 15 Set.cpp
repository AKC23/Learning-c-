/*/
C++ STL 15 Set
Learnt : use of set,use of iterator and pair in set(),
will print the name ascendingly and won't print the duplicate value
/*/

#include<iostream>
#include<stdio.h>
#include<set>                                           //for using set
#include<iterator>

using namespace std;

int main()
{
    set <int> s;
    set <int> :: iterator it;

    s.insert(10);
    s.insert(3);
    s.insert(5);
    s.insert(10);
    //will print the value ascendingly and won't print the duplicate value
    puts("\nInput proces 1");
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    puts("\nTo remove something");
    it = s.find(3);
    s.erase(it);
    //another procedure : s.erase(s.find(5));
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    set <string> s2;
    set <string> :: iterator it2;

    s2.insert("Dipta");
    s2.insert("Reza");
    s2.insert("Arnob");
    s2.insert("Nabil");
    s2.insert("Dipta");

    //will print the name ascendingly and won't print the duplicate value
    puts("Input process 2");
    puts("Will print the name ascendingly and won't print the duplicate value");
    for(it2=s2.begin();it2!=s2.end();it2++)
    {
        cout<<*it2<<" ";
    }

    puts("\n\nTo check if the name is inserted or not");
    pair <set <string> :: iterator, bool> p;
    p = s2.insert("Man");
    if(p.second == true)
    {
        cout<<"Inserted"<<endl;
    }
    else
    {
        cout<<"Can't insert"<<endl;
    }

    puts("\nAfter inserting the element ascendingly");
    for(it2=s2.begin();it2!=s2.end();it2++)
    {
        cout<<*it2<<" ";
    }

    return 0;
}
