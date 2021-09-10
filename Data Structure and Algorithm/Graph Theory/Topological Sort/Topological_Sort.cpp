/*
DFS by array Love Extends Code
Link: https://www.youtube.com/watch?v=JV9jYvWuxeI&list=PLgLCjVh3O6Sh88ebyMzRtREnncdX10WZD&index=16&ab_channel=LoveExtendsCode

7 7 

2 1
0 1
0 2
1 3
3 4
1 4
5 6

*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define WHITE 1         //if node is not visited, WHITE = 1
#define GREY 2          //if node is visited first time, GREY = 2
#define BLACK 3         //if node is traversed, BLACK = 3

int Time = 1;
int start_time[100],finish_time[100];
int adj[20][20];
int color[20];
int node, edge;
stack<int> ans;

void DFS_Visit(int x) //x = 0
{
    color[x] = GREY; //if node is visited first time, GREY = 1
    start_time[x] = Time;
    ++Time;
    //visiting adjacent node
    for (int i = 0; i < node; i++)
    {
        if (adj[x][i] == 1) //x = 0    i = 2
        {
            if (color[i] == WHITE) //if node is not visited, WHITE = 1
            {
                DFS_Visit(i); //i = 2
            }
        }
    }

    color[x] = BLACK; //if the node's work is done
    cout << x;
    finish_time[x] = Time;
    ++Time;
    ans.push(x);
}

void DFS(int Starting_Node)
{
    for (int i = 0; i < node; i++)
    {
        color[i] = WHITE;
    }
    for (int i = Starting_Node; i < node; i++)
    {
        if (color[i] == WHITE)
        {
            DFS_Visit(i);
        }
    }
}

int main()
{
    int source, destination, start, end, i, j;
    cout << "Enter node and edge: ";
    cin >> node >> edge;

    for (i = 0; i < edge; i++)
    {
        cin >> source >> destination;
        adj[source][destination] = 1;
        // adj[destination][source] = 1;
    }
    
    cout << "\nEnter starting node: ";
    cin >> start;
    cout << "Node visited: ";
    DFS(start);

    cout << "\nOutput of matrix: \n";
    for (i = 0; i < node; i++)
    {
        for (j = 0; j < node; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\nNode  Start Time  Finish Time\n";
    for (i = 0; i < node; i++)
    {
        // cout << "Node: " << (char)('A' + i) << " " << start_time[i] << " " << finish_time[i] << endl;
        cout << (char)('A' + i) << "    \t" << start_time[i] << "\t\t" << finish_time[i] << endl;
    }

    cout << "After topological sort the elements are: ";
    
    while(!ans.empty())
    {
        cout<<ans.top()<<" ";
        // cout << (char)('A' + ans.top()) << " ";
        ans.pop();
    }
    cout<<endl;

    return 0;
}
/*
input: 

5 4

0 1
1 2
0 2
0 4


7 6

0 1 
1 3
1 2
2 3 
4 5
5 6


5 7

5 6
0 1
2 0
2 1
1 3
3 4
1 4

5 7

2 0
0 1
1 4
0 3
3 1
2 3
3 4


5 9

0 1 
0 2
1 2
1 3
2 4
2 4
3 4
3 5
4 5


*/