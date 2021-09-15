
#include <bits/stdc++.h>
using namespace std;

void printParenthesis(int i, int j, int n, int *bracket, char &name)
{
    if (i == j)
    {
        cout << name++;
        return;
    }

    cout << "(";
    printParenthesis(i, *((bracket + j * n) + i), n, bracket, name);


    printParenthesis(*((bracket + j * n) + i) + 1, j, n, bracket, name);

    cout << ")";
}


int MatrixChainOrder(int p[], int n)
{

    int m[n][n];

    int i, j, k, L, q;


    for (i = 1; i < n; i++)
    {
        m[i][i] = 0; 
    }

    for (L = 2; L < n; L++) //cormen page 375
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++) //finding the minimum using the formula
            {
                // q = cost/scalar multiplications
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    m[j][i] = k;
                }
            }
        }
    }

    char name = 'A'; //1st matrix 'A' 2nd matrix 'B'

    cout << "\nOptimal Parenthesization is: ";
    // printParenthesis(1, n - 1, n, (int *)m, name);
    printParenthesis(1, n - 1, n, *m, name);
    // printParenthesis(1, n - 1, n, m, name);
    cout << "\nOptimal Cost is : " << m[1][n - 1];

    // return m[1][n - 1];
}

int main()
{
    // int arr[] = {1, 2, 3, 4};
    // int arr[] = {40, 20, 30, 10, 30};
    int arr[] = {10, 20, 30, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    MatrixChainOrder(arr, size);

    // cout << "\n\nMinimum number of multiplications is "
    //      << MatrixChainOrder(arr, size) << "\n\n";

    return 0;
}
/* 

Input
40 20 30 10 30

Output

Optimal Parenthesization is: ((A(BC))D)
Optimal Cost is : 26000

Minimum number of multiplications is 26000


Input
1 2 3 4

Output
Optimal Parenthesization is: ((AB)C)
Optimal Cost is : 18

Minimum number of multiplications is 18


Input: 
p[] = 10 20 30 40 30

Output: Optimal parenthesization is (((AB)C)D)
        Optimal cost of parenthesization is 30000


*/