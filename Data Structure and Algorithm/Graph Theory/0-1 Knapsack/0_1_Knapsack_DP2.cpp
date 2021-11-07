#include <bits/stdc++.h>

using namespace std;

int n = 4; //item no

int w[20], b[20], V[20][20];

int knapsack(int W)
{
    for (int i = 0; i <= W; i++)
    {
        V[0][i] = 0; //first row 0
    }
    for (int i = 1; i <= n; i++)
    {
        V[i][0] = 0; //first column 0
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (w[i] <= j) // if possible
            {
                if ((b[i] + V[i - 1][j - w[i]]) > V[i - 1][j]) //put on bag
                {
                    V[i][j] = b[i] + V[i - 1][j - w[i]]; // bi = current benefit + remain weight
                }
                else 
                {
                    V[i][j] = V[i - 1][j]; //if item is not taken
                }
            }
            else
            {
                V[i][j] = V[i - 1][j]; //if not possible  (remain previous value)
            }
        }
    }
    cout << "Given matrix " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            cout << V[i][j] << " "; //table print
        }
        cout << endl;
    }

    return V[n][W];
}

void Find_Item(int W)
{
    cout << "\nSelected item is " << endl;

    int result = V[n][W];

    int k = W;
    for (int i = n; i > 0 && result > 0; i--) //until item zero  i-- for uporer ghore jabo
    {
        if (result != V[i - 1][k])
        {
            cout << w[i]; // mark item
            if (result > 1)
            {
                cout << "+";
            }
            result = result - b[i - 1]; // previous row
            k = k - w[i - 1];           // determine the column
        }
    }
}

int main()
{
    int N, X;

    cin >> N;
    cin >> X;
    w[N], b[N];

    for (int i = 1; i <= N; i++) //time
    {
        cin >> w[i];
    }
    for (int i = 1; i <= N; i++) //marks
    {
        cin >> b[i];
    }

    // cout << "Maximum Capacity: ";
    // int W;
    // cin >> W;

    // cout << "Enter the Element " << endl;
    // cout << "Weight"
    //      << "  "
    //      << "Benefit" << endl;
    // cout << "---------------" << endl;

    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> w[i] >> b[i];
    // }

    int val = knapsack(X);

    cout << "The Maximum Value that can be stored in Knapsnack is " << endl;
    cout << val;

    Find_Item(X);
}

/* 

Input 1
4 10
4 8 5 3
5 12 8 1


13
5 4 

Input 2

4 5

2 3 4 5
3 4 5 6



*/

/*

2 3
3 4
4 5
5 6
*/
