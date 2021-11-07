#include <bits/stdc++.h>
using namespace std;

#define INF 10000
vector<int> adj_list[100];
vector<int> cost_list[100];

int cost[100][100] = {0};
int path[100][100] = {-1};

void floyd_warshall(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == j)
            {
                continue;
            }
            cost[i][j] = INF;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < adj_list[i].size(); ++j)
        {
            cost[i][adj_list[i][j]] = cost_list[i][j];
            path[i][adj_list[i][j]] = i;
        }
    }

    for (int k = 1; k <= n; ++k)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (cost[i][k] != INF && cost[k][j] != INF && cost[i][j] > cost[i][k] + cost[k][j])
                {
                    cost[i][j] = cost[i][k] + cost[k][j];
                    path[i][j] = path[k][j];
                }
            }
        }
    }

}

int main()
{
    int node, edge;
    cin >> node >> edge;

    for (int i = 0; i < edge; ++i)
    {
        int u, v, c;
        cin >> u >> v >> c;
        adj_list[u].push_back(v);
        cost_list[u].push_back(c);
    }

    floyd_warshall(node);

    for (int i = 1; i <= node; ++i)
    {
        for (int j = 1; j <= node; ++j)
        {
            cout << cost[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= node; ++i)
    {
        for (int j = 1; j <= node; ++j)
        {
            cout << path[i][j] << " ";
        }
        cout << endl;
    }
}
