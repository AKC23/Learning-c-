/*
Graph Input

input: 
5 7

5 6
0 1
2 0
2 1
1 3
3 4
1 4

*/


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int adj[20][20];

int main()
{
    int node,edge;
    
    cout<<"Enter node and edge: ";
    cin>>node>>edge;
    int src,dest;              //src = source, destination = dest 

    for (int i = 0; i < edge; i++)
    {
        cin>>src>>dest;
        adj[src][dest] = 1;
        adj[dest][src] = 1;
    }

    cout<<"\n'O' is connected with : ";
    for(int i = 0; i< node; i++)
    {        
        if(adj[0][i] == 1)
        {
            cout<<i<<" ";
        }
    }

    cout<<"\nOutput of matrix: \n";
    for(int i = 0; i< node;i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout<<adj[i][j]<<" ";
        }       
        cout<<"\n"; 
    }
    return 0;
}

