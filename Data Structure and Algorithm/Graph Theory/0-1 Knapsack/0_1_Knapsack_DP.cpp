#include <bits/stdc++.h>

using namespace std;

int N,X;

int w[20], b[20], V[20][20];
void Find_Items(int W);
int Knapsack(int W);

int Knapsack(int W)
{
	for (int i = 0; i <= W; i++)
	{
		V[0][i] = 0; // first row = 0
	}
	for (int i = 1; i <= N; i++)
	{
		V[i][0] = 0; //first column = 0
	}

	for (int i = 1; i <= N; i++)
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

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            cout << V[i][j] << " "; //table print
        }
        cout << endl;
    }

	return V[N][W];
}

void Find_Items(int W)
{
	cout << "\nMaximum number of marks = ";

	int result = V[N][W];

	int k = W;
	for (int i = N; i > 0 && result > 0; i--) //bottom up approach e upore uthbo
	{
		if (result != V[i - 1][k]) //if result is not same with the previous row
		{
			cout << w[i]; 
			if (result > 1)
			{
				cout << "+";
			}

			result = result - b[i - 1]; // previous row
			
			k = k - w[i - 1];			// determine the column
		}
	}
}

int main()
{
	cin >> N;		//N different questions
	cin >> X;		//X different marks
	w[N], b[N];

	for (int i = 1; i <= N; i++) //time
	{
		cin >> w[i];
	}
	for (int i = 1; i <= N; i++) //marks
	{
		cin >> b[i];
	}


	int val = Knapsack(X);

	cout << "The Maximum Value that can be stored in Knapsnack is: ";
	cout << val;

	Find_Items(X);
}

/* 

Input 1
4 10
4 8 5 3
5 12 8 1

13
5 4 

Given matrix 
0 0 0 0 5 5 5 5 5 5 5
0 0 0 0 5 5 5 5 12 12 12
0 0 0 0 5 8 8 8 12 13 13
0 0 0 1 5 8 8 8 12 13 13



Input 2

4 5

2 3 4 5
3 4 5 6

Input 3
max capacity 5

2 3
3 4
4 5
5 6



4 6

1 2 3 4
12 10 14 25

1 3 4 2
12 14 25 10

*/

/*
6 13
4 5 5 6 7 9
4 5 10 9 8 6


*/
