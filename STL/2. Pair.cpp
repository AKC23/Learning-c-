
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,i;
    s = n = i = 0;
    cin>>s>>n;

    pair<int,int> ar[1000];

    for(i=0;i<n;i++)
    {
        cin>>ar[i].first>>ar[i].second;
    }

    sort(ar,ar+n);

    cout<<"After sorting "<<endl;

    for(i=0;i<n;i++)
    {
        cout<<ar[i].first<<" "<<ar[i].second<<endl;
    }

    return 0;

}

