/*/
C++ STL 13 map
Learnt : use of map, use of insert(), can not use same name again in key(program won't understand)
can use same number again and again
/*/
#include<stdio.h>
#include<iostream>
#include<map>                                   //for using map

using namespace std;

int main()
{
    puts("1st process");
    map <string, int> m;                        //map<string(key), int (value)>
    map <string, int> :: iterator it;

    m["Shaba"] = 52;
    m["Dipto"] = 33;
    m["Nabil"] = 21;
    m["Dipto"] = 44;                            //if it is duplicated then it will print the later added value
    m["Jamal"] = 66;

    it = m.begin();
    //cout<<*it<<endl;                          //it wouldn't work as it is not indicating anything
    cout<<it -> first<<" ";                    //will show the string after sorting the name
    cout<<it -> second<<endl;                   //will show the int after sorting
    it++;
    cout<<it -> first<<" "<< it-> second<<endl;

    printf("\nRoll of Shaba: %d\n",m["Shaba"]);

    puts("2nd process");
    puts("Will print the name ascendingly");
    map <string, int> m2;
    map <string, int> :: iterator it2;

    m2["Nabil"] = 21;
    m2["Dipto"] = 44;
    m2["Shaba"] = 55;
    m2.insert(make_pair("Akash",10));
    m2.insert(make_pair("Jamal",66));           //can take input like this

    printf("\nRoll of Shaba: %d\n",m2["Shaba"]);

    for(it=m2.begin(); it!=m2.end(); it++)
    {
        cout<<it -> first<<" "<< it-> second<<endl;
    }

    return 0;

}
