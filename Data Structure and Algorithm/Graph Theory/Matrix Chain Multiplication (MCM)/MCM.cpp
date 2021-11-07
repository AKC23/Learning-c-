#include <bits/stdc++.h>
using namespace std;

int m[20][20], s[20][20], n;

int mcm(int d[], int size)
{
	int i, j, k, L, cost;

	for (i = 1; i < size; i++) 	//for single matrix, cost of multiplication is zero.
		m[i][i] = 0;

	for (L=2; L<size; L++) // L is chain length. For 4 matrices, we have 3 parentheses combos.
	{
		for (i=1; i < size-L+1; i++)
		{
			j = i + L - 1;
			m[i][j] = INT_MAX;  //initial values of every element in infinity.

			for (k=i; k<j; k++)
			{
				cost = m[i][k] + m[k + 1][j] + d[i-1] * d[k] * d[j]; //Carmen's book.

				if (cost < m[i][j])
                {
                    m[i][j] = cost;
                    s[i][j] = k;
                    cout<<"Cost of m("<<i<<","<<j<<") : "<<cost<<endl;
                }

			}
		}
	}

	cout<<"m matrix"<<endl;
	for(int i=1; i<size; i++) // printing m[][] (cost matrix)
    {
        for(int j=1; j<size; j++)
        {
            if(j<i) m[i][j] = -1;
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"s matrix:"<<endl;
	for(int i=1; i<size; i++) // printing m[][] (cost matrix)
    {
        for(int j=1; j<size; j++)
        {
            if(j<i) s[i][j] = -1;
            cout<<s[i][j]<<"\t";
        }
        cout<<endl;
    }

	return m[1][size-1]; //returning the top-rightmost element of the matrix m
}

void parentheses(int i,int j)
{
    if(i==j) cout<<"A"<<i;

    else
    {
        cout<<"(";
        parentheses(i,s[i][j]);
        parentheses(s[i][j]+1,j);
        cout<<")";
    }
}

int main()
{
    cout<<"Enter number of matrices {A1,A2...An}: ";
    cin>>n;
    int size = n+1;
    int d[size];

    cout<<"Enter dimensions {d0,d1...dn}: ";
    for(int i=0; i<size; i++) //array of dimensions.
        cin>>d[i];

	cout<<endl;
	cout << "Minimum cost: "<< mcm(d, size)<<endl<<endl;
	parentheses(1,n);

	return 0;
}


/// 40 20 30 10 30
/// 5 4 6 2 7

/* 
4
2 3 37 7 5

 */