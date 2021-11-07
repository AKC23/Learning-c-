#include <bits/stdc++.h>
using namespace std;
//store the elements in ascending order on the basis of finishing time

bool comp(pair<int, int> i, pair<int, int> j)
{
    return i.second < j.second;
}


int main()
{
    int n;
    cout << "enter the number of elements:" << endl;
    cin >> n;
    map<pair<int, int>, int> m;
    vector<pair<int, int>> vec(n);
    cout << " Enter the starting time of activity:" << endl;
    //store starting time
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first;
    }
    cout << "Enter the finishing time of activity:" << endl;
    //store finishing time
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        m[vec[i]] = i;
    }
    //sorting
    sort(vec.begin(), vec.end(), comp);
    //store the activity
    vector<int> v;
    vector<int>::iterator i;
    v.push_back(m[vec[0]]);
    pair<int, int> current = vec[0];
    for (int j = 1; j < n; j++)
    {
        if (vec[j].first > current.second)
        {
            v.push_back(m[vec[j]]);
            current = vec[j];
        }
    }
    cout << "Order in ehich the activity take place" << endl;
    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i + 1 << " ";
    }
    cout << endl;
    return 0;
}

/* 
enter the number of elements:
6
Enter the starting time of activity:
1 3 0 5 8 5
Enter the finishing time of activity:
2 4 6 7 9 9
Order in ehich the activity take place
1 2 4 5

 */