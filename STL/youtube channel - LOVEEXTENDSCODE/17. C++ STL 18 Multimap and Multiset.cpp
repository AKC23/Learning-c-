/**
Multimap and Multiset
https://www.youtube.com/watch?v=-eSomeDScBk&ab_channel=LoveExtendsCode
Date: Saturday, December 19, 2020  
*/

#include <bits/stdc++.h>
#include <algorithm>
#include <set>                                      //for set/multiset
#include <map>                                      //for map/multimap
#include <vector>
#include <queue>

using namespace std;

int main()
{
    multimap <string,int> mp;
    multimap <string,int> :: iterator it;

    mp.insert( make_pair("dipta",42) );
    mp.insert( make_pair("dipta",42) );
    mp.insert( make_pair("dipta",33) );

    cout<<"Output for multimap\n";
    for(it=mp.begin();it!= mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }

    multiset <int> ms;
    multiset <int> :: iterator it2;
    ms.insert(100);
    ms.insert(100);
    ms.insert(100);
    ms.insert(100);
    ms.insert(1);

    cout<<"Output for multiset\n";
    for(it2 = ms.begin(); it2!= ms.end(); it2++)
    {
        cout<<*it2<<"\n";
    }

    return 0;
}
