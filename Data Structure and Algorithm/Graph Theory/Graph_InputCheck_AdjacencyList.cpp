

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
vector<int> cost[100];

int main()
{
    int node, edge;

    cout << "Enter node and edge: ";
    cin >> node >> edge;
    int src, dest, weight; //src = source, destination = dest

    for (int i = 0; i < edge; i++)
    {
        // cin >> src >> dest >> weight;
        cin >> src >> dest;
        weight = 1;
        //directed and weighted
        adj[src].push_back(dest);
        //for directed and unweighted -> comment this line 
        cost[src].push_back(weight);

        // for undirected and weighted -> remove comment 
        // adj[dest].push_back(src);
        // cost[dest].push_back(weight);
    }

    // cout << "\n'O' is connected with : ";
    // for (int i = 0; i < node; i++)
    // {
    //     if (cost[0][i] == 1)
    //     {
    //         cout << i << " ";
    //     }
    // }

    cout << "\nOutput of matrix: \n";
    for (int i = 0; i < node; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < cost[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*
Graph Input

without cost
input: 
5 7

5 6
0 1
2 0
2 1
1 3
3 4
1 4

with cost
input: 
5 7

5 6 1
0 1 1
2 0 1 
2 1 1
1 3 1
3 4 1
1 4 1

*/