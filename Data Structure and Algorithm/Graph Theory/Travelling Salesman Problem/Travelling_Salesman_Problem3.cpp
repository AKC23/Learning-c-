#include <bits/stdc++.h>
using namespace std;

#define maxn 100;

int g[10][100];
int p[10][100];
int graph[10][10];

int tsp(int city, int start, int set, int npow)
{
    int masked, mask, result = -1, temp;
    if (g[start][set] != -1)
    {
        return g[start][set];
    }
    else
    {
        for (int x = 0; x < city; x++)
        {
            mask = npow - 1 - (int)pow(2, x);
            masked = set & mask;
            if (masked != set)
            {
                temp = graph[start][x] + tsp(city, x, masked, npow);
                if (result == -1 || result > temp)
                    result = temp;
                p[start][set] = x;
            }
        }
    }
    g[start][set] = result;
    return result;
}

int main()
{
    int city, npow;
    cin >> city;
    npow = city * city;

    memset(g, -1, sizeof(g));
    memset(p, -1, sizeof(p));

    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < city; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < city; i++)
    {
        g[i][0] = graph[i][0];
    }

    cout << "\nThe min cost is : ";
    cout << tsp(city, 0, npow - 2, npow) << endl;
    cout << endl;
    return 0;
}

/* 
4 
0 20 35 42 
20 0 34 30 
35 34 0 12 
42 30 12 0

4

0 10 15 20
5 0 9 10
6 13 0 12
8 8 9 0


 */