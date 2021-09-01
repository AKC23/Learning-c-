/* 
https://www.geeksforgeeks.org/kruskals-algorithm-simple-implementation-for-adjacency-matrix/
Kruskal Algorithm
Sample input/output is given after the code
*/
#include <bits/stdc++.h>
using namespace std;

int node, edge;

int Parent[50];
// int tempcount = 0;

int Find_Set(int i)
{
    while (Parent[i] != i)
    {
        i = Parent[i];
        // cout << "\ni: " << i;
        // tempcount++;
        // cout << "  Temp: " << tempcount++;
    }
    return i;
}

void Union_Set(int i, int j)
{
    int a = Find_Set(i);
    int b = Find_Set(j);
    Parent[a] = b;
}

int Make_Set(int i)
{
    Parent[i] = i;
}

void Kruskal(vector<vector<int>> &vec)
{
    int Min_Cost = 0;

    // MakeSet(node)
    for (int i = 0; i < node; i++)
    {
        Make_Set(i);
    }

    for (int edge_count = 1; edge_count < node; edge_count++)
    {
        int min, Node1, Node2;
        min = INT_MAX, Node1 = INT_MIN, Node2 = INT_MIN;
        for (int i = 0; i < edge; i++)
        {
            for (int j = 0; j < node; j++)
            {
                if (Find_Set(i) != Find_Set(j) && vec[i][j] < min)
                {
                    min = vec[i][j];
                    // cout << "\nMin: " << min << "  ";
                    Node1 = i;
                    Node2 = j;
                }
            }
        }

        Union_Set(Node1, Node2);
        printf("Edge %d: (%d to %d) cost: %d \n", edge_count, Node1, Node2, min);
        Min_Cost += min;
    }
    printf("\nTotal minimum cost = %d \n", Min_Cost);
}

int main()
{
    int src, dest, weights;
    src = dest = weights = 0; //src = source, destination = dest

    cout << "\nEnter node and edge: ";
    cin >> node >> edge;

    vector<vector<int>> vec(edge, vector<int>(node, INT_MAX));

    cout << "Enter edges and weights\n";
    for (int j = 0; j < edge; j++)
    {
        cin >> src >> dest >> weights;
        vec[src][dest] = weights;
        vec[dest][src] = weights;
    }

    cout << "\nOutput\n";
    Kruskal(vec);

    return 0;
}

/*
Sample Input

Node and edge 5 7

Enter edges and weights
0 1 2
0 3 6
1 2 3
1 3 8
1 4 5
2 4 7
3 4 9   


Output
Edge 1: (0 to 1) cost: 2
Edge 2: (1 to 2) cost: 3
Edge 3: (1 to 4) cost: 5
Edge 4: (0 to 3) cost: 6

Total minimum cost = 16


*/
