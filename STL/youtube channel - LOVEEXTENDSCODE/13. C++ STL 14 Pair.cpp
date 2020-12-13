/*/
C++ STL 14 Pair
Learnt : use of pair, use of insert(), can use same name and number again
pair can be used in vector, set, iterator
Use of pair in vector :-  error: '>>' should be '> >' within a nested template argument list|
/*/

#include<stdio.h>
#include<iostream>
#include<iterator>
#include<vector>
#include<utility>                                       //for using pair
using namespace std;

int main()
{
    puts("1st process");
    pair <string, int> p1;                              //map<string(key), int (value)>
//    pair <string, int> :: iterator it;                //can't use pair and iterator like this

    p1.first = "dipta";
    p1.second = 22;
    cout<<p1.first<<" "<<p1.second<<endl;

    puts("2nd process");
    pair <string, int> p2("nabil",44);
    cout<<p2.first<<" "<<p2.second<<endl;

    puts("3rd process");
    pair <int, string> p3;
    p3 = make_pair(33,"Saba");
    cout<<p3.first<<" "<<p3.second<<endl;

    puts("4th process : use of pair using vector");
    vector <pair <int, string> > p4;                            //error: '>>' should be '> >' within a nested template argument list|
    //vector<pair<(string)(key), int value> > variable name;
    vector <pair <int, string> > :: iterator it;                //have to use iterator like this
    p4.push_back(make_pair(66,"Jawad"));                        // 0 - 66 Jawad
    p4.push_back(make_pair(23,"Asif"));                         // 1 - 23 Asif
    cout<<p4[0].first <<" "<<p4[0].second<<endl;
    cout<<p4[1].first <<" "<<p4[1].second<<endl;

    puts("5th process : use of pair with iterator");
    for(it=p4.begin(); it!=p4.end(); it++)
    {
        cout<<it -> first<<" "<< it-> second<<endl;
    }

    return 0;
}