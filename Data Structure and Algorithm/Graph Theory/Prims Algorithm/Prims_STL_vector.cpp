/* 
https://www.geeksforgeeks.org/prims-algorithm-simple-implementation-for-adjacency-matrix-representation/
Prims Algorithm
Sample input/output is given after the code
*/
#include <bits/stdc++.h>
using namespace std;

int node, edge;

bool Validity_Check(int u, int v, vector<bool> Parent)
{
    if ((u == v) || (Parent[u] == false && Parent[v] == false) || (Parent[u] == true && Parent[v] == true))
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Prim(vector<vector<int>> &vec)
{
    vector<bool> Parent(node, false);
    Parent[0] = true;

    int Min_Cost = 0;
    
    for (int edge_count = 1; edge_count < node; edge_count++)
    {
        int min = INT_MAX, Node1 = INT_MIN, Node2 = INT_MIN;

        for (int i = 0; i < edge; i++)
        {
            for (int j = 0; j < node; j++)
            {
                if (vec[i][j] < min)
                {
                    if (Validity_Check(i, j, Parent))
                    {
                        min = vec[i][j];
                        // cout << "\nMin: " << min << "  ";
                        Node1 = i;
                        Node2 = j;
                    }
                }
            }
        }
        if (Node1 != INT_MIN && Node2 != INT_MIN)
        {
            printf("Edge %d: (%d to %d) cost: %d \n", edge_count, Node1, Node2, min);
            Min_Cost = Min_Cost + min;
            Parent[Node1] = Parent[Node2] = true;
        }
    }
    printf("\nMinimum cost = %d \n", Min_Cost);
}

int main()
{
    int src, dest, weights;
    src = dest = weights = 0; //src = source, dest = destination

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
    Prim(vec);

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
