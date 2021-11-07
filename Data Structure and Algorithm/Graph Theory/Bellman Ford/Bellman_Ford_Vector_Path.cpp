#include <iostream>
#include <vector>
#include <iomanip>
#include <climits>
using namespace std;

// Data structure to store a graph edge
struct Edge
{
    int source, dest, weight;
};

// Recursive function to print the path of a given vertex from source vertex
void printPath(vector<int> const &parent, int vertex)
{
    if (vertex < 0)
    {
        return;
    }

    printPath(parent, parent[vertex]);
    cout << vertex << " ";
}

// Function to run the Bellman–Ford algorithm from a given source
void bellmanFord(vector<Edge> const &edges, int source, int N)
{
    // `distance[]` and `parent[]` stores the shortest path (least cost/path)
    // information. Initially, all vertices except the source vertex
    // weight INFINITY and no parent

    vector<int> distance(N, INT_MAX);
    distance[source] = 0;

    vector<int> parent(N, -1);

    int u, v, w, k = N;

    // relaxation step (run `V-1` times)
    while (--k)
    {
        for (Edge edge : edges)
        {
            // edge from `u` to `v` having weight `w`
            u = edge.source;
            v = edge.dest;
            w = edge.weight;

            // if the distance to destination `v` can be
            // shortened by taking edge `u —> v`
            if (distance[u] != INT_MAX && distance[u] + w < distance[v])
            {
                // update distance to the new lower value
                distance[v] = distance[u] + w;

                // set v's parent as `u`
                parent[v] = u;
            }
        }
    }

    // run relaxation step once more for N'th time to
    // check for negative-weight cycles
    for (Edge edge : edges)
    {
        // edge from `u` to `v` having weight `w`
        u = edge.source;
        v = edge.dest;
        w = edge.weight;

        // if the distance to destination `u` can be
        // shortened by taking edge `u —> v`
        if (distance[u] != INT_MAX && distance[u] + w < distance[v])
        {
            cout << "Negative-weight cycle is found!!";
            return;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Distance of vertex " << i << " from the source:"
             << setw(2) << distance[i] << " and path: ";
        printPath(parent, i);
        cout << "\n";
    }
}

int main()
{
    // vector of graph edges as per the above diagram
    // vector<Edge> edges =
    //     {
    //         // `(x, y, w)` —> edge from `x` to `y` having weight `w`
    //         {0, 1, -1},
    //         {0, 2, 4},
    //         {1, 2, 3},
    //         {1, 3, 2},
    //         {1, 4, 2},
    //         {3, 2, 5},
    //         {3, 1, 1},
    //         {4, 3, -3}};
    // `(x, y, w)` —> edge from `x` to `y` having weight `w`
    /*     
    vector<Edge> edges =
        {{0, 1, 3},
         {0, 3, 1},
         {1, 2, 8},
         {1, 3, 5},
         {1, 4, 1},
         {2, 1, -1},
         {3, 2, -2},
         {3, 4, 4}};
 */
    vector<Edge> edges =
        {{0, 1, 4},
         {0, 3, 5},
         {1, 2, 6},
         {1, 3, 1},
         {3, 2, 2},
         {3, 1, 3},
         {2, 4, -4},
         {2, 1, -1},
         {4, 3, 4}};

    // set the maximum number of nodes in the graph
    int N = 5;
    cout << "\nNumber of nodes: " << N;
    // let source be vertex 0
    int source = 0;

    cout << "\nSource: " << source<<"\n\n";
    // run the Bellman–Ford algorithm from a given source
    bellmanFord(edges, source, N);
    cout << "\n\n";
    return 0;
}